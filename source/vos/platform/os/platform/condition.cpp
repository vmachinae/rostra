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
///   File: condition.cpp
///
/// Author: $author$
///   Date: 1/17/2020
///////////////////////////////////////////////////////////////////////
#include "vos/platform/os/platform/condition.hpp"
#include "vos/mt/os/mutex.hpp"
#include "vos/mt/os/condition.hpp"

namespace vos {
namespace platform {
namespace os {
namespace platform {

typedef mt::os::mutex mutex;
typedef mt::os::condition condition;

} /// namespace platform
} /// namespace os
} /// namespace platform
} /// namespace vos

///
/// platform condition
/// ...
platform_condition_error_t platform_condition_create(platform_condition_t* condition, platform_condition_attr_t attr) {
    ::vos::platform::os::platform::mutex* mtx = 0;
    if ((condition) && (mtx = ((::vos::platform::os::platform::mutex*)attr))) {
        ::vos::platform::os::platform::condition* cnd = 0;
        if ((cnd = new ::vos::platform::os::platform::condition(*mtx, ((::vos::platform::os::platform::condition::attached_t)::vos::platform::os::platform::condition::unattached), false, false))) {
            platform_condition_error_t err = platform_condition_error_failed;
            if ((cnd->create())) {
                *condition = cnd;
                err = platform_condition_error_success;
            } else {
                delete cnd;
            }
            return err;
        }
    }
    return platform_condition_error_failed;
}
platform_condition_error_t platform_condition_destroy(platform_condition_t* condition) {
    if ((condition)) {
        ::vos::platform::os::platform::condition* cnd = 0;
        if ((cnd = ((::vos::platform::os::platform::condition*)(*condition)))) {
            platform_condition_error_t err = platform_condition_error_failed;
            if ((cnd->destroy())) {
                err = platform_condition_error_success;
            }
            *condition = 0;
            delete cnd;
            return err;
        }
    }
    return platform_condition_error_failed;
}
platform_condition_error_t platform_condition_wait(platform_condition_t* condition) {
    if ((condition)) {
        ::vos::platform::os::platform::condition* cnd = 0;
        if ((cnd = ((::vos::platform::os::platform::condition*)(*condition)))) {
            platform_condition_error_t err = platform_condition_error_failed;
            ::vos::wait_status status = ::vos::wait_failed;
            if (::vos::wait_success == (status = cnd->wait())) {
                err = platform_condition_error_success;
            } else {
                if (::vos::wait_busy == (status)) {
                    err = platform_condition_error_busy;
                } else {
                    if (::vos::wait_timeout == (status)) {
                        err = platform_condition_error_timeout;
                    } else {
                        if (::vos::wait_interrupted == (status)) {
                            err = platform_condition_error_interrupted;
                        } else {
                        }
                    }
                }
            }
            return err;
        }
    }
    return platform_condition_error_failed;
}
platform_condition_error_t platform_condition_time_wait(platform_condition_t* condition, platform_condition_timeout_t* timeout) {
    if ((condition) && (timeout)) {
        ::vos::platform::os::platform::condition* cnd = 0;
        if ((cnd = ((::vos::platform::os::platform::condition*)(*condition)))) {
            platform_condition_error_t err = platform_condition_error_failed;
            mseconds_t milliseconds = ::vos::seconds_mseconds(timeout->tv_sec) + ::vos::nseconds_mseconds(timeout->tv_nsec);
            ::vos::wait_status status = ::vos::wait_failed;
            if (::vos::wait_success == (status = cnd->time_wait(milliseconds))) {
                err = platform_condition_error_success;
            } else {
                if (::vos::wait_timeout == (status)) {
                    err = platform_condition_error_timeout;
                } else {
                    if (::vos::wait_interrupted == (status)) {
                        err = platform_condition_error_interrupted;
                    } else {
                    }
                }
            }
            return err;
        }
    }
    return platform_condition_error_failed;
}
platform_condition_error_t platform_condition_timed_wait(platform_condition_t* condition, platform_condition_timeout_t* timeout) {
    if ((condition) && (timeout)) {
        ::vos::platform::os::platform::condition* cnd = 0;
        if ((cnd = ((::vos::platform::os::platform::condition*)(*condition)))) {
            platform_condition_error_t err = platform_condition_error_failed;
            mseconds_t milliseconds = ::vos::seconds_mseconds(timeout->tv_sec) + ::vos::nseconds_mseconds(timeout->tv_nsec);
            ::vos::wait_status status = ::vos::wait_failed;
            if (::vos::wait_success == (status = cnd->timed_wait(milliseconds))) {
                err = platform_condition_error_success;
            } else {
                if (::vos::wait_timeout == (status)) {
                    err = platform_condition_error_timeout;
                } else {
                    if (::vos::wait_interrupted == (status)) {
                        err = platform_condition_error_interrupted;
                    } else {
                    }
                }
            }
            return err;
        }
    }
    return platform_condition_error_failed;
}
platform_condition_error_t platform_condition_try_wait(platform_condition_t* condition) {
    if ((condition)) {
        ::vos::platform::os::platform::condition* cnd = 0;
        if ((cnd = ((::vos::platform::os::platform::condition*)(*condition)))) {
            platform_condition_error_t err = platform_condition_error_failed;
            ::vos::wait_status status = ::vos::wait_failed;
            if (::vos::wait_success == (status = cnd->try_wait())) {
                err = platform_condition_error_success;
            } else {
                if (::vos::wait_timeout == (status)) {
                    err = platform_condition_error_timeout;
                } else {
                    if (::vos::wait_interrupted == (status)) {
                        err = platform_condition_error_interrupted;
                    } else {
                    }
                }
            }
            return err;
        }
    }
    return platform_condition_error_failed;
}
platform_condition_error_t platform_condition_signal(platform_condition_t* condition) {
    if ((condition)) {
        ::vos::platform::os::platform::condition* cnd = 0;
        if ((cnd = ((::vos::platform::os::platform::condition*)(*condition)))) {
            platform_condition_error_t err = platform_condition_error_failed;
            if ((cnd->signal())) {
                err = platform_condition_error_success;
            }
            return err;
        }
    }
    return platform_condition_error_failed;
}
/// ...
/// platform condition
///
