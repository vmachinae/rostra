/*/
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
///   File: compiler.h
///
/// Author: $author$
///   Date: 1/1/2020
///////////////////////////////////////////////////////////////////////
/*/
#ifndef XOS_PLATFORM_COMPILER_H
#define XOS_PLATFORM_COMPILER_H

#include "xos/platform/build.h"

#if defined(__MSC__) || defined(_MSC_VER) || defined(MSC_VER)
/*/
/// Microsoft C/C++
/// ...
/*/
#if !defined(__MSC__)
#define __MSC__
#endif /*/ !defined(__MSC__) /*/

#if !defined(MSC_VER)
#define MSC_VER _MSC_VER
#endif /*/ !defined(MSC_VER) /*/

#define MSC_VER_6 1200
#define MSC_VER_7 1300
#define MSC_VER_8 1400
#define MSC_VER_9 1500
#define MSC_VER_10 1600
#define MSC_VER_11 1700
#define MSC_VER_12 1800
#define MSC_VER_14 1900

#if (_MSC_VER >= MSC_VER_14)
#define WINDOWS_MSC_VER_14
#elif (_MSC_VER >= MSC_VER_12)
#define WINDOWS_MSC_VER_12
#elif (_MSC_VER >= MSC_VER_11)
#define WINDOWS_MSC_VER_11
#elif (_MSC_VER >= MSC_VER_10)
#define WINDOWS_MSC_VER_10
#elif (_MSC_VER >= MSC_VER_9)
#define WINDOWS_MSC_VER_9
#elif (_MSC_VER >= MSC_VER_8)
#define WINDOWS_MSC_VER_8
#elif (_MSC_VER >= MSC_VER_7)
#define WINDOWS_MSC_VER_7
#else /// (_MSC_VER >= MSC_VER_14) 
#define WINDOWS_MSC_VER_6
#endif /// (_MSC_VER >= MSC_VER_14) 
/*/
/// ...
/// Microsoft C/C++
/*/
#endif /*/ defined(__MSC__) || defined(_MSC_VER) || defined(MSC_VER) /*/

#if defined(__GNUC__)
/*/
/// Gnu C/C++
/// ...
/*/
#define _T(string) string
/*/
/// ...
/// Gnu C/C++
/*/
#endif /*/ defined(__GNUC__) /*/

#if defined(__OBJC__) || defined(__OBJC2__)
/*/
/// Objective C
/// ...
/*/
#if defined(__OBJC2__)
#if !defined(OBJC2)
#define OBJC2
#endif /*/ !defined(OBJC2) /*/
#else /*/ defined(__OBJC2__) /*/
#if !defined(OBJC1)
#define OBJC1
#endif /*/ !defined(OBJC1) /*/
#endif /*/ defined(__OBJC2__) /*/
/*/
/// ...
/// Objective C
/*/
#endif /*/ defined(__OBJC__) || defined(__OBJC2__) /*/

#if defined(__cplusplus)
extern "C" {
#endif /*/ defined(__cplusplus) /*/

#if defined(__cplusplus)
} /*/ extern "C" /*/
#endif /*/ defined(__cplusplus) /*/

#endif /*/ ndef XOS_PLATFORM_COMPILER_H /*/
