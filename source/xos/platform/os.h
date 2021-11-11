/*/
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
///   File: os.h
///
/// Author: $author$
///   Date: 12/27/2019
///////////////////////////////////////////////////////////////////////
/*/
#ifndef XOS_PLATFORM_OS_H
#define XOS_PLATFORM_OS_H

#include "xos/platform/build.h"

#if defined(WINDOWS)  
#include "xos/platform/microsoft/windows.h"
#elif defined(APPLEOSX)  
#include "xos/platform/apple/osx.h"
#elif defined(APPLEIOS)  
#include "xos/platform/apple/ios.h"
#elif defined(LINUX)  
#include "xos/platform/linux.h"
#else /// defined(LINUX)  
#include "xos/platform/posix.h"
#endif /// defined(LINUX) 

#include "xos/platform/configure.h"

#if defined(__cplusplus)
extern "C" {
#endif /*/ defined(__cplusplus) /*/

#if defined(__cplusplus)
} /*/ extern "C" /*/
#endif /*/ defined(__cplusplus) /*/

#endif /*/ ndef XOS_PLATFORM_OS_H /*/
