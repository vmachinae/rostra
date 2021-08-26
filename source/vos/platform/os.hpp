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
#ifndef VOS_PLATFORM_OS_HPP
#define VOS_PLATFORM_OS_HPP

#include "vos/platform/configure.hpp"

#if defined(WINDOWS)  
#include "vos/platform/microsoft/windows.hpp"
#elif defined(APPLEOSX)  
#include "vos/platform/apple/osx.hpp"
#elif defined(APPLEIOS)  
#include "vos/platform/apple/ios.hpp"
#elif defined(LINUX)  
#include "vos/platform/linux.hpp"
#else /// defined(LINUX)  
#include "vos/platform/posix.hpp"
#endif /// defined(LINUX) 

#include "vos/platform/os/microsoft/windows.hpp"
#include "vos/platform/os/apple/osx.hpp"
#include "vos/platform/os/apple/ios.hpp"
#include "vos/platform/os/linux.hpp"
#include "vos/platform/os/posix.hpp"

namespace vos {
namespace platform {

} /// namespace platform
} /// namespace vos

#endif /// ndef VOS_PLATFORM_OS_HPP
