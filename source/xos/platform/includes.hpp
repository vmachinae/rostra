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
///   File: includes.hpp
///
/// Author: $author$
///   Date: 11/16/2019
///////////////////////////////////////////////////////////////////////
#ifndef XOS_PLATFORM_INCLUDES_HPP
#define XOS_PLATFORM_INCLUDES_HPP

#include "xos/platform/compiler.hpp"
#include "xos/platform/includes.h"

#if defined(WINDOWS)
/// Windows
/// ...
/// ...
/// Windows
#else /// defined(WINDOWS)
/// Unix
/// ...
#if defined(APPLEOS)
/// Apple
/// ...
#if defined(APPLEOSX)
/// Apple OSX
/// ...
/// ...
/// Apple OSX
#elif defined(APPLEIOS)
/// Apple IOS
/// ...
/// ...
/// Apple IOS
#endif /// defined(APPLEIOS)
/// ...
/// Apple
#elif defined(LINUX)
/// Linux
/// ...
/// ...
/// Linux
#else /// defined(LINUX)
/// Posix
/// ...
/// ...
/// Posix
#endif /// defined(LINUX)
/// ...
/// Unix
#endif /// defined(WINDOWS)

namespace xos {
namespace platform {

} /// namespace platform
} /// namespace xos

#endif /// ndef XOS_PLATFORM_INCLUDES_HPP
