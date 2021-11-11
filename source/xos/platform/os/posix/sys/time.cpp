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
///   File: time.cpp
///
/// Author: $author$
///   Date: 1/25/2020
///////////////////////////////////////////////////////////////////////
#include "xos/platform/os/posix/sys/time.hpp"
#include "xos/os/time.hpp"
#include "xos/os/sleep.hpp"

namespace xos {
namespace platform {
namespace os {
namespace posix {
namespace sys {

} /// namespace sys
} /// namespace posix
} /// namespace os
} /// namespace platform
} /// namespace xos

///
/// posix
/// ...
int clock_gettime(clockid_t clk_id, struct timespec *res) {
    return xos::os::clock_gettime(clk_id, res);
}
int gettimeofday(struct timeval* tv, void* p) {
    return xos::os::gettimeofday(tv, p);
}
int usleep(useconds_t useconds) {
    return ::xos::os::usleep(useconds);
}
/// ...
/// posix
/// 
