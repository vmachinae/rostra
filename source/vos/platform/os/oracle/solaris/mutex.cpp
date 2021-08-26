///////////////////////////////////////////////////////////////////////
/// Copyright (c) 1988-2019 $organization$
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
///   Date: 12/27/2019
///////////////////////////////////////////////////////////////////////
#include "vos/platform/os/oracle/solaris/mutex.hpp"
#include "vos/mt/os/mutex.hpp"

namespace vos {
namespace platform {
namespace os {
namespace oracle {
namespace solaris {

} /// namespace solaris
} /// namespace oracle
} /// namespace os
} /// namespace platform
} /// namespace vos

#if !defined(SOLARIS)
///
/// solaris mutexes
/// ...
int mutex_init(mutex_t *mp, int type, void *arg) {
    if ((mp)) {
        int err = EFAULT;
        try {
            ::vos::mt::os::mutex* mtx = 0;
            if ((mtx = new ::vos::mt::os::mutex(((::vos::mt::os::mutex::attached_t)::vos::mt::os::mutex::unattached), false, false))) {
                if ((mtx->create())) {
                    *mp = mtx;
                    err = 0;
                } else {
                    delete mtx;
                }
            }
        } catch (...) {
            err = ENOMEM;
        }
        return err;
    }
    return EINVAL;
}
int mutex_destroy(mutex_t *mp) {
    if ((mp)) {
        ::vos::mt::os::mutex* mtx = 0;
        if ((mtx = ((::vos::mt::os::mutex*)(*mp)))) {
            int err = EFAULT;
            if ((mtx->destroy())) {
                err = 0;
            }
            *mp = 0;
            try {
                delete mtx;
            } catch (...) {
                err = ENOMEM;
            }
            return err;
        }
    }
    return EINVAL;
}
int mutex_lock(mutex_t *mp) {
    if ((mp)) {
        ::vos::mt::os::mutex* mtx = 0;
        if ((mtx = ((::vos::mt::os::mutex*)(*mp)))) {
            if ((mtx->lock())) {
                return 0;
            }
            return EFAULT;
        }
    }
    return EINVAL;
}
int mutex_trylock(mutex_t *mp) {
    if ((mp)) {
        ::vos::mt::os::mutex* mtx = 0;
        if ((mtx = ((::vos::mt::os::mutex*)(*mp)))) {
            ::vos::lock_status status = mtx->try_lock();
            if (::vos::lock_success == (status)) {
                return 0;
            } else {
                if (::vos::lock_busy == (status)) {
                    return EBUSY;
                } else {
                    if (::vos::lock_timeout == (status)) {
                        return ETIMEDOUT;
                    } else {
                        if (::vos::lock_interrupted == (status)) {
                            return EINTR;
                        } else {
                            return EFAULT;
                        }
                    }
                }
            }
        }
    }
    return EINVAL;
}
int mutex_unlock(mutex_t *mp) {
    if ((mp)) {
        ::vos::mt::os::mutex* mtx = 0;
        if ((mtx = ((::vos::mt::os::mutex*)(*mp)))) {
            if ((mtx->unlock())) {
                return 0;
            }
            return EFAULT;
        }
    }
    return EINVAL;
}
int mutex_timedlock(mutex_t *mp, timestruc_t *abstime) {
    if ((mp) && (abstime)) {
        ::vos::mt::os::mutex* mtx = 0;
        if ((mtx = ((::vos::mt::os::mutex*)(*mp)))) {
            int err = 0;
            timestruc_t reltime;
            if (!(err = ::clock_gettime(CLOCK_REALTIME, &reltime))) {
                reltime.tv_sec = abstime->tv_sec - reltime.tv_sec;
                reltime.tv_nsec = abstime->tv_nsec - reltime.tv_nsec;
                err = mutex_reltimedlock(mp, &reltime);
            }
            return err;
        }
    }
    return EINVAL;
}
int mutex_reltimedlock(mutex_t *mp, timestruc_t *reltime) {
    if ((mp) && (reltime)) {
        ::vos::mt::os::mutex* mtx = 0;
        if ((mtx = ((::vos::mt::os::mutex*)(*mp)))) {
            mseconds_t milliseconds = ::vos::seconds_mseconds(reltime->tv_sec) + ::vos::nseconds_mseconds(reltime->tv_nsec);
            ::vos::lock_status status = mtx->timed_lock(milliseconds);
            if (::vos::lock_success == (status)) {
                return 0;
            } else {
                if (::vos::lock_busy == (status)) {
                    return EBUSY;
                } else {
                    if (::vos::lock_timeout == (status)) {
                        return ETIMEDOUT;
                    } else {
                        if (::vos::lock_interrupted == (status)) {
                            return EINTR;
                        } else {
                            return EFAULT;
                        }
                    }
                }
            }
        }
    }
    return EINVAL;
}
/// ...
/// solaris mutexes
/// 
#endif /// !defined(SOLARIS)
