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
///   File: types.h
///
/// Author: $author$
///   Date: 1/1/2020
///////////////////////////////////////////////////////////////////////
/*/
#ifndef XOS_PLATFORM_TYPES_H
#define XOS_PLATFORM_TYPES_H

#include "xos/platform/defines.h"

#if defined(WINDOWS)
/*/
/// Windows
/// ...
/*/
#if !defined(__GNUC__)
/*/
/// Microsoft C/C++
/// ...
/*/
typedef TCHAR tchar_t;
typedef WCHAR wchar_t;

typedef BYTE byte_t;
typedef WORD word_t;

typedef INT8 int8_t;
typedef INT16 int16_t;
typedef INT32 int32_t;
typedef INT64 int64_t;

typedef UINT8 uint8_t;
typedef UINT16 uint16_t;
typedef UINT32 uint32_t;
typedef UINT64 uint64_t;

typedef int MODE_T;
typedef MODE_T mode_t;

typedef SSIZE_T ssize_t;

typedef time_t useconds_t;

typedef UINT uint;
typedef USHORT ushort;
typedef ULONG ulong;

typedef void* pointer_t;
typedef const void* const_pointer_t;
/*/
/// ...
/// Microsoft C/C++
/*/
#else /*/ !defined(__GNUC__) /*/
/*/
/// Gnu C/C++
/// ...
/*/
#error Compiler other than Microsoft C/C++ (Gnu C/C++) being used
/*/
/// ...
/// Gnu C/C++
/*/
#endif /*/ !defined(__GNUC__) /*/

typedef ULONGLONG QWORD;

typedef DWORD MODE;

typedef HANDLE INVALID_HANDLE_T;
typedef HANDLE NULL_HANDLE_T;
#define NULL_HANDLE_VALUE NULL

typedef ATOM INVALID_ATOM_T;
typedef ATOM NULL_ATOM_T;
#define NULL_ATOM_VALUE 0
/*/
/// ...
/// Windows
/*/
#else /*/ defined(WINDOWS) /*/
/*/
/// Unix
/// ...
/*/
#if defined(APPLEOS)
/*/
/// Apple
/// ...
/*/
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
#else /*/ defined(APPLEIOS) /*/
#endif /*/ defined(APPLEIOS) /*/
typedef unsigned char uint8_t;

#if !defined(OBJC_BOOL_DEFINED)
typedef int BOOL;
#endif /*/ !defined(OBJC_BOOL_DEFINED) /*/

#if !defined(pointer_t)
#define pointer_t platform_pointer_t
#endif /*/ !defined(pointer_t) /*/

#if !defined(const_pointer_t)
#define const_pointer_t platform_const_pointer_t
#endif /*/ !defined(const_pointer_t) /*/
/*/
/// ...
/// Apple
/*/
#else /*/ defined(APPLEOS) /*/
#if defined(LINUX)
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
/*/
/// Unix
/// ...
/*/
typedef int BOOL;
typedef void* pointer_t;
/*/
/// ...
/// Unix
/*/
#endif /*/ defined(APPLEOS) /*/
typedef char tchar_t;
typedef uint8_t byte_t;
typedef uint16_t word_t;

/*/
/// Unix to Windows types
/// ...
/*/
typedef char CHAR;
typedef wchar_t WCHAR;
typedef tchar_t TCHAR;

typedef byte_t BYTE;
typedef word_t WORD;
typedef uint32_t DWORD;
typedef uint64_t QWORD;

typedef int INT;
typedef int32_t LONG;
typedef int64_t LONGLONG;

typedef unsigned int UINT;
typedef uint32_t ULONG;
typedef uint64_t ULONGLONG;

typedef short SHORT;
typedef unsigned short USHORT;

typedef int8_t INT8;
typedef int16_t INT16;
typedef int32_t INT32;
typedef int64_t INT64;

typedef uint8_t UINT8;
typedef uint16_t UINT16;
typedef uint32_t UINT32;
typedef uint64_t UINT64;

typedef void* PVOID;
typedef PVOID LPVOID;
typedef PVOID HMODULE;
typedef PVOID HINSTANCE;
typedef PVOID FARPROC;

typedef PVOID HANDLE;
typedef INT INVALID_HANDLE_T;
typedef INT NULL_HANDLE_T;
#define INVALID_HANDLE_VALUE ((HANDLE)-1)
#define NULL_HANDLE_VALUE ((HANDLE)0)

typedef INT ATOM;
typedef INT INVALID_ATOM_T;
typedef INT NULL_ATOM_T;
#define INVALID_ATOM_VALUE -1
#define NULL_ATOM_VALUE 0

typedef char* PCHAR;
typedef PCHAR LPCHAR;

typedef TCHAR* PTCHAR;
typedef PTCHAR LPTCHAR;

typedef WCHAR* PWCHAR;
typedef PWCHAR LPWCHAR;

typedef BYTE* PBYTE;
typedef PBYTE LPBYTE;

typedef WORD* PWORD;
typedef PWORD LPWORD;

typedef DWORD* PDWORD;
typedef PDWORD LPDWORD;

typedef SHORT* PSHORT;
typedef PSHORT LPSHORT;

typedef LONG* PLONG;
typedef PLONG LPLONG;

typedef USHORT* PUSHORT;
typedef PUSHORT LPUSHORT;

typedef ULONG* PULONG;
typedef PULONG LPULONG;

typedef char* PSTR;
typedef PSTR LPSTR;
typedef const char* PCSTR;
typedef PCSTR LPCSTR;

typedef TCHAR* PTSTR;
typedef PTSTR LPTSTR;
typedef const TCHAR* PCTSTR;
typedef PCTSTR LPCTSTR;

typedef WCHAR* PWSTR;
typedef PWSTR LPWSTR;
typedef const WCHAR* PCWSTR;
typedef PCWSTR LPCWSTR;

typedef int MODE;
typedef mode_t MODE_T;
typedef size_t SIZE_T;
typedef ssize_t SSIZE_T;

#if !defined(MAKEWORD)
#define MAKEWORD(upperByte, lowerByte) \
    ((WORD)((((WORD)upperByte) << 8) | ((WORD)upperByte)))
#endif /*/ !defined(MAKEWORD) /*/
/*/
/// ...
/// Unix to Windows types
/*/

/*/
/// ...
/// Unix
/*/
#endif /*/ defined(WINDOWS) /*/

typedef ULONG TUNSIGNED;
typedef LONG TSIGNED;
typedef ULONG TSIZE;
typedef LONG TCOUNT;
typedef LONG TOFFSET;
typedef LONG TLENGTH;
#define UNDEFINED_LENGTH ((TLENGTH)(-1))

typedef MODE_T MODET;
typedef SIZE_T SIZET;
typedef SSIZE_T SSIZET;

typedef const CHAR* PCCHAR;
typedef const PCCHAR* PCPCCHAR;
typedef PCCHAR* PPCCHAR;
typedef PCHAR* PPCHAR;

typedef const TCHAR* PCTCHAR;
typedef const PCTCHAR* PCPCTCHAR;
typedef PCTCHAR* PPCTCHAR;
typedef PTCHAR* PPTCHAR;

typedef const WCHAR* PCWCHAR;
typedef const PCWCHAR* PCPCWCHAR;
typedef PCWCHAR* PPCWCHAR;
typedef PWCHAR* PPWCHAR;

typedef const BYTE* PCBYTE;
typedef const PCBYTE* PCPCBYTE;
typedef PCBYTE* PPCBYTE;
typedef PBYTE* PPBYTE;

typedef char char_t;

typedef FILE* file_t;
typedef void* pointer_t;
typedef const void* const_pointer_t;
#define null ((pointer_t)0)

typedef useconds_t nseconds_t;
typedef useconds_t mseconds_t;
typedef mseconds_t seconds_t;
typedef seconds_t minutes_t;
typedef seconds_t hours_t;
typedef unsigned days_t;
typedef unsigned months_t;
typedef unsigned years_t;
typedef days_t day_t;
typedef months_t month_t;
typedef years_t year_t;

#define CHARS_NULL ((char*)0)
#define WCHARS_NULL ((wchar_t*)0)
#define TCHARS_NULL ((tchar_t*)0)

#define CCHARS_NULL ((const char*)0)
#define CWCHARS_NULL ((const wchar_t*)0)
#define CTCHARS_NULL ((const tchar_t*)0)

#define NULL_BYTE 0
#define NULL_CHAR 0
#define NULL_TCHAR 0
#define NULL_WCHAR 0

#define NULL_POINTER_VALUE ((void*)(0))
#define NULL_POINTER NULL_POINTER_VALUE

#define INVALID_HANDLE INVALID_HANDLE_VALUE
#define NULL_HANDLE NULL_HANDLE_VALUE
#define NULL_ATOM NULL_ATOM_VALUE

#define V_HANDLE INT
#define V_INVALID_HANDLE_VALUE ((V_HANDLE)-1)
#define V_NULL_HANDLE_VALUE ((V_HANDLE)0)

#define V_ATOM INT
#define V_NULL_ATOM_VALUE ((V_ATOM)0)

#if defined(NO_TEMPLATE_PARAMETER_CAST)
/*/
// Can't cast template parameters
/*/
#define V_INVALID_HANDLE -1
#define V_NULL_HANDLE 0
#define V_NULL_ATOM 0
#else /*/ defined(NO_TEMPLATE_PARAMETER_CAST) /*/
#define V_INVALID_HANDLE V_INVALID_HANDLE_VALUE
#define V_NULL_HANDLE V_NULL_HANDLE_VALUE
#define V_NULL_ATOM V_NULL_ATOM_VALUE
#endif /*/ defined(NO_TEMPLATE_PARAMETER_CAST) /*/

#if defined(__cplusplus)
extern "C" {
#endif /*/ defined(__cplusplus) /*/

#if defined(__cplusplus)
} /*/ extern "C" /*/
#endif /*/ defined(__cplusplus) /*/

#endif /*/ ndef XOS_PLATFORM_TYPES_H /*/
