///////////////////////////////////////////////////////////////////////
/// Copyright (c) 1988-2020 $organization$
///
/// This software is provided by the author and contributors ``as is'' 
/// and any express or implied warranties, including, but not limited to, 
/// the implied warranties of merchantability and fitness for a particular 
/// purpose are disclaimed. In no event shall the author or contributors 
/// be liable for any direct, indirect, incidental, special, exemplary, 
/// or consequential damages (including, but not limited to, procurement 
/// of substitute goods or services; loss of use, data, or profits; or 
/// business interruption) however caused and on any theory of liability, 
/// whether in contract, strict liability, or tort (including negligence 
/// or otherwise) arising in any way out of the use of this software, 
/// even if advised of the possibility of such damage.
///
///   File: mutex.cpp
///
/// Author: $author$
///   Date: 1/25/2020
///////////////////////////////////////////////////////////////////////
#include "vos/mt/os/mutex.hpp"
#include "vos/platform/os/posix/mutex.hpp"

namespace vos {
namespace platform {
namespace os {
namespace posix {

typedef vos::mt::os::mutex mutex;
/// struct mutex_attr
struct mutex_attr {
    int pshared, type;
    mutex_attr(): pshared(0), type(0) {
    }
}; /// struct mutex_attr

} /// namespace posix
} /// namespace os
} /// namespace platform
} /// namespace vos

///
/// posix mutexes
/// ...
int pthread_mutex_init (pthread_mutex_t  *mutex, const pthread_mutexattr_t  *attr) {
    if ((mutex) && (attr)) {
        int err = ENOMEM;
        ::vos::platform::os::posix::mutex* mtx = 0;
        ::vos::platform::os::posix::mutex::attached_t unattached = ((::vos::platform::os::posix::mutex::attached_t)::vos::platform::os::posix::mutex::unattached);
        try {
            if ((mtx = new ::vos::platform::os::posix::mutex(unattached, false, false))) {
                if ((mtx->create())) {
                    *mutex = mtx;
                    err = 0;
                } else {
                    delete mtx;
                }
            }
        } catch (...) {
            err = EFAULT;
        }
        return err;
    }
    return EINVAL;
}
int pthread_mutex_destroy (pthread_mutex_t  *mutex) {
    if ((mutex)) {
        ::vos::platform::os::posix::mutex* mtx = 0;
        if ((mtx = ((::vos::platform::os::posix::mutex*)(*mutex)))) {
            int err = 0;
            try {
                delete mtx;
                *mutex = 0;
            } catch (...) {
                err = EFAULT;
            }
            return err;
        }
    }
    return EINVAL;
}

int pthread_mutex_lock (pthread_mutex_t  *mutex) {
    if ((mutex)) {
        ::vos::platform::os::posix::mutex* mtx = 0;
        if ((mtx = ((::vos::platform::os::posix::mutex*)(*mutex)))) {
            int err = EFAULT;
            if ((mtx->lock())) {
                err = 0;
            }
            return err;
        }
    }
    return EINVAL;
}
int pthread_mutex_trylock (pthread_mutex_t  *mutex) {
    if ((mutex)) {
        ::vos::platform::os::posix::mutex* mtx = 0;
        if ((mtx = ((::vos::platform::os::posix::mutex*)(*mutex)))) {
            int err = EFAULT;
            ::vos::lock_status status = ::vos::lock_failed;
            if (::vos::lock_success == (status = mtx->try_lock())) {
                err = 0;
            } else {
                switch (status) {
                case ::vos::lock_busy:
                    errno = (err = EBUSY);
                    break;
                case ::vos::lock_timeout:
                    errno = (err = ETIMEDOUT);
                    break;
                case ::vos::lock_interrupted:
                    errno = (err = EINTR);
                    break;
                default:
                    errno = err;
                }
            }
            return err;
        }
    }
    return EINVAL;
}
int pthread_mutex_timedlock (pthread_mutex_t *mutex, const struct timespec *abstime) {
    if ((mutex) && (abstime)) {
        ::vos::platform::os::posix::mutex* mtx = 0;
        if ((mtx = ((::vos::platform::os::posix::mutex*)(*mutex)))) {
            int err = EFAULT;
            ::vos::lock_status status = ::vos::lock_failed;
            mseconds_t abs_milliseconds = ::vos::seconds_mseconds(abstime->tv_sec) + ::vos::nseconds_mseconds(abstime->tv_nsec);
            struct timespec timeout;
            if (!(err = ::clock_gettime(CLOCK_REALTIME, &timeout))) {
                mseconds_t milliseconds = ::vos::seconds_mseconds(timeout.tv_sec) + ::vos::nseconds_mseconds(timeout.tv_nsec);
                if (::vos::lock_success == (status = mtx->time_lock(((abs_milliseconds >= milliseconds)?(abs_milliseconds - milliseconds):(milliseconds))))) {
                    err = 0;
                } else {
                    switch (status) {
                    case ::vos::lock_busy:
                        errno = (err = EBUSY);
                        break;
                    case ::vos::lock_timeout:
                        errno = (err = ETIMEDOUT);
                        break;
                    case ::vos::lock_interrupted:
                        errno = (err = EINTR);
                        break;
                    default:
                        errno = err;
                    }
                }
            }
            return err;
        }
    }
    return EINVAL;
}
int pthread_mutex_timedlock_relative_np (pthread_mutex_t *mutex, const struct timespec *reltime) {
    if ((mutex) && (reltime)) {
        ::vos::platform::os::posix::mutex* mtx = 0;
        if ((mtx = ((::vos::platform::os::posix::mutex*)(*mutex)))) {
            int err = EFAULT;
            ::vos::lock_status status = ::vos::lock_failed;
            mseconds_t milliseconds = ::vos::seconds_mseconds(reltime->tv_sec) + ::vos::nseconds_mseconds(reltime->tv_nsec);
            if (::vos::lock_success == (status = mtx->timed_lock(milliseconds))) {
                err = 0;
            } else {
                switch (status) {
                case ::vos::lock_busy:
                    errno = (err = EBUSY);
                    break;
                case ::vos::lock_timeout:
                    errno = (err = ETIMEDOUT);
                    break;
                case ::vos::lock_interrupted:
                    errno = (err = EINTR);
                    break;
                default:
                    errno = err;
                }
            }
            return err;
        }
    }
    return EINVAL;
}
int pthread_mutex_unlock (pthread_mutex_t  *mutex) {
    if ((mutex)) {
        ::vos::platform::os::posix::mutex* mtx = 0;
        if ((mtx = ((::vos::platform::os::posix::mutex*)(*mutex)))) {
            int err = EFAULT;
            if ((mtx->unlock())) {
                err = 0;
            }
            return err;
        }
    }
    return EINVAL;
}

int pthread_mutexattr_init (pthread_mutexattr_t *attr) {
    if ((attr)) {
        int err = ENOMEM;
        ::vos::platform::os::posix::mutex_attr* att = 0;
        try {
            if ((att = new ::vos::platform::os::posix::mutex_attr)) {
                *attr = att;
                err = 0;
            }
        } catch (...) {
            err = EFAULT;
        }
        return err;
    }
    return EINVAL;
}
int pthread_mutexattr_destroy (pthread_mutexattr_t *attr) {
    if ((attr)) {
        ::vos::platform::os::posix::mutex_attr* att = 0;
        if ((att = ((::vos::platform::os::posix::mutex_attr*)(*attr)))) {
            int err = 0;
            try {
                delete att;
                *attr = 0;
            } catch (...) {
                err = EFAULT;
            }
            return err;
        }
    }
    return EINVAL;
}

int pthread_mutexattr_gettype (const pthread_mutexattr_t *attr, int *type) {
    if ((attr) && (attr)) {
        ::vos::platform::os::posix::mutex_attr* att = 0;
        if ((att = ((::vos::platform::os::posix::mutex_attr*)(*attr)))) {
            int err = 0;
            *type = att->type;
            return err;
        }
    }
    return EINVAL;
}
int pthread_mutexattr_settype (pthread_mutexattr_t *attr, int type) {
    if ((attr)) {
        ::vos::platform::os::posix::mutex_attr* att = 0;
        if ((att = ((::vos::platform::os::posix::mutex_attr*)(*attr)))) {
            int err = 0;
            att->type = type;
            return err;
        }
    }
    return EINVAL;
}

int pthread_mutexattr_getpshared (const pthread_mutexattr_t *attr, int *pshared) {
    if ((attr) && (pshared)) {
        ::vos::platform::os::posix::mutex_attr* att = 0;
        if ((att = ((::vos::platform::os::posix::mutex_attr*)(*attr)))) {
            int err = 0;
            *pshared = att->pshared;
            return err;
        }
    }
    return EINVAL;
}
int pthread_mutexattr_setpshared (pthread_mutexattr_t *attr, int pshared) {
    if ((attr)) {
        ::vos::platform::os::posix::mutex_attr* att = 0;
        if ((att = ((::vos::platform::os::posix::mutex_attr*)(*attr)))) {
            int err = 0;
            att->pshared = pshared;
            return err;
        }
    }
    return EINVAL;
}
/// ...
/// posix mutexes
/// 
