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
///   File: oses.cpp
///
/// Author: $author$
///   Date: 1/7/2020
///////////////////////////////////////////////////////////////////////
#include "xos/platform/os/oses.hpp"

#if !defined(LINUX)
#include "xos/platform/os/posix/sys/time.cpp"
#endif /// !defined(LINUX)

#if !defined(WINDOWS)
#include "xos/platform/os/microsoft/windows/io.cpp"
#include "xos/platform/os/microsoft/windows/Handle.cpp"
#endif /// !defined(WINDOWS)

#if !defined(MACH)
#include "xos/platform/os/mach/task.cpp"
#endif /// !defined(MACH)

namespace xos {
namespace platform {
namespace os {

} /// namespace os
} /// namespace platform
} /// namespace xos
