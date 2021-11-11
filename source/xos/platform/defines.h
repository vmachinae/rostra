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
///   File: defines.h
///
/// Author: $author$
///   Date: 1/1/2020
///////////////////////////////////////////////////////////////////////
/*/
#ifndef XOS_PLATFORM_DEFINES_H
#define XOS_PLATFORM_DEFINES_H

#include "xos/platform/includes.h"

#if defined(WINDOWS)
/*/
/// Windows
/// ...
/*/
#if !defined(__GNUC__)
/*/
// Microsoft C/C++
// ...
/*/
#if !defined(DEBUG_BUILD)
#if defined(_DEBUG)
#define DEBUG_BUILD
#endif /*/ defined(_DEBUG) /*/
#endif /*/ !defined(DEBUG_BUILD) /*/

#if !defined(packed)
#define packed
#endif /*/ !defined(packed) /*/
/*/
// ...
// Microsoft C/C++
/*/
#else /*/ !defined(__GNUC__) /*/
#error Compiler other than Microsoft C/C++ (Gnu C/C++) not supported
#endif /*/ !defined(__GNUC__) /*/

#if !defined(exported)
#define imported __declspec(dllimport)
#define exported __declspec(dllexport)
#endif /*/ !defined(exported) /*/

#if defined(UNICODE)
#define TCHAR_NOT_CHAR
#endif /*/ defined(UNICODE) /*/

#define FOREIGN_DIRECTORY_SEPARATOR_CHAR '/'
#define PLATFORM_DIRECTORY_SEPARATOR_CHAR '\\'
#define PLATFORM_VOLUME_SEPARATOR_CHAR ':'
/*/
/// ...
/// Windows
/*/
#else /*/ defined(WINDOWS) /*/
/*/
/// Unix
/// ...
/*/
#if !defined(__GNUC__)
#error Compiler other than Gnu C/C++ not supported
#else /*/ !defined(__GNUC__) /*/
/*/
// Gnu C/C++
// ...
/*/
#if !defined(packed)
#define packed __attribute__ ((packed))
#endif /*/ !defined(packed) /*/
/*/
// ...
// Gnu C/C++
/*/
#endif /*/ !defined(__GNUC__) /*/

#if defined(APPLEOS)
/*/
/// Apple
/// ...
/*/
#if !defined(PLATFORM_HAS_NO_EXECVPE)
#define PLATFORM_HAS_NO_EXECVPE
#endif /*/ !defined(PLATFORM_HAS_NO_EXECVPE) /*/
#if defined(APPLEOSX)
/*/
/// Apple OSX
/// ...
/*/
/*/
/// ...
/// Apple OSX
/*/
#elif defined(APPLEIOS)
/*/
/// Apple IOS
/// ...
/*/
/*/
/// ...
/// Apple IOS
/*/
#else /*/ defined(APPLEOSX) /*/
#endif /*/ defined(APPLEOSX) /*/
/*/
/// ...
/// Apple
/*/
#elif defined(LINUX)
/*/
/// Linux
/// ...
/*/
/*/
/// ...
/// Linux
/*/
#else /*/ defined(LINUX) /*/
/*/
/// Posix
/// ...
/*/
/*/
/// ...
/// Posix
/*/
#endif /*/ defined(LINUX) /*/

#if !defined(exported)
#define imported
#define exported
#endif /*/ !defined(exported) /*/

#if !defined(PLATFORM_IMPORT)
#define PLATFORM_IMPORT imported
#endif /*/ !defined(PLATFORM_IMPORT) /*/

#if !defined(PLATFORM_EXPORT)
#define PLATFORM_EXPORT exported
#endif /*/ !defined(PLATFORM_EXPORT) /*/

#if defined(__stdcall)
#define PLATFORM___stdcall __stdcall
#undef __stdcall
#endif /*/ defined(__stdcall) /*/
#define __stdcall

#if defined(unix)
#define PLATFORM_unix unix
#undef unix
#endif /*/ defined(unix) /*/

#define FOREIGN_DIRECTORY_SEPARATOR_CHAR '\\'
#define PLATFORM_DIRECTORY_SEPARATOR_CHAR '/'
#define PLATFORM_VOLUME_SEPARATOR_CHAR 0

#define TRUE 1
#define FALSE 0

#define INFINITE -1

#define WINAPI
#define FAR
#define _In_
#define _Out_
#define _Inout_
#define _In_opt_
#define _Out_opt_
#define _Inout_opt_
/*/
/// ...
/// Unix
/*/
#endif /*/ defined(WINDOWS) /*/

#define UNDEFINED -1

#define PLATFORM_EXTENSION_SEPARATOR "."
#define FOREIGN_EXTENSION_SEPARATOR PLATFORM_EXTENSION_SEPARATOR

#define PLATFORM_EXTENSION_SEPARATOR_CHAR '.'
#define FOREIGN_EXTENSION_SEPARATOR_CHAR PLATFORM_EXTENSION_SEPARATOR_CHAR

#if defined(DELETE)
#define PLATFORM_DELETE DELETE
#undef DELETE
#endif /*/ defined(DELETE) /*/

#if defined(__cplusplus)
extern "C" {
#endif /*/ defined(__cplusplus) /*/

#if defined(__cplusplus)
} /*/ extern "C" /*/
#endif /*/ defined(__cplusplus) /*/

#endif /*/ ndef XOS_PLATFORM_DEFINES_H /*/
