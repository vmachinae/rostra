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
///   File: os.hpp
///
/// Author: $author$
///   Date: 11/17/2019
///////////////////////////////////////////////////////////////////////
#ifndef XOS_PLATFORM_OS_HPP
#define XOS_PLATFORM_OS_HPP

#include "xos/platform/configure.hpp"

#if defined(WINDOWS)  
#include "xos/platform/microsoft/windows.hpp"
#elif defined(APPLEOSX)  
#include "xos/platform/apple/osx.hpp"
#elif defined(APPLEIOS)  
#include "xos/platform/apple/ios.hpp"
#elif defined(LINUX)  
#include "xos/platform/linux.hpp"
#else /// defined(LINUX)  
#include "xos/platform/posix.hpp"
#endif /// defined(LINUX) 

#include "xos/platform/os/microsoft/windows.hpp"
#include "xos/platform/os/apple/osx.hpp"
#include "xos/platform/os/apple/ios.hpp"
#include "xos/platform/os/linux.hpp"
#include "xos/platform/os/posix.hpp"

namespace xos {
namespace platform {

} /// namespace platform
} /// namespace xos

#endif /// ndef XOS_PLATFORM_OS_HPP
