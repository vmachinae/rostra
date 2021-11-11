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
///   File: windows.h
///
/// Author: $author$
///   Date: 1/3/2020
///////////////////////////////////////////////////////////////////////
/*/
#ifndef XOS_PLATFORM_OS_MICROSOFT_WINDOWS_H
#define XOS_PLATFORM_OS_MICROSOFT_WINDOWS_H

#include "xos/platform/os.h"

#if !defined(WINDOWS)
/*/ enum _O_ /*/
enum {
_O_RDONLY     = 0,
_O_WRONLY     = 1,
_O_RDWR       = 2,
_O_APPEND     = 0x0008,
_O_RANDOM     = 0x0010,
_O_SEQUENTIAL = 0x0020,
_O_TEMPORARY  = 0x0040,
_O_NOINHERIT  = 0x0080,
_O_CREAT      = 0x0100,
_O_TRUNC      = 0x0200,
_O_EXCL       = 0x0400,
_O_TEXT       = 0x4000,
_O_BINARY     = 0x8000,
_O_RAW        = _O_BINARY,
}; /*/ enum _O_ /*/

/*/ enum WAIT_ /*/
enum {
    WAIT_FAILED    = -1,
    WAIT_OBJECT_0  = 0,
    WAIT_ABANDONED = 0x80,
    WAIT_TIMEOUT   = 0x102
}; /*/ enum WAIT_ /*/

/*/ enum /*/
enum {
    CREATE_SUSPENDED = 0x00000004,
    STACK_SIZE_PARAM_IS_A_RESERVATION = 0x00010000
}; /*/ enum /*/

typedef struct _SECURITY_ATTRIBUTES {
  DWORD  nLength;
  LPVOID lpSecurityDescriptor;
  BOOL   bInheritHandle;
} SECURITY_ATTRIBUTES, *PSECURITY_ATTRIBUTES, *LPSECURITY_ATTRIBUTES;

typedef DWORD WINAPI ThreadProc(
  _In_ LPVOID lpParameter
);
typedef ThreadProc *PTHREAD_START_ROUTINE, *LPTHREAD_START_ROUTINE;
#endif /*/ !defined(WINDOWS) /*/

#if defined(__cplusplus)
extern "C" {
#endif /*/ defined(__cplusplus) /*/

#if !defined(WINDOWS)
int _fileno(
   FILE *stream
);
int _setmode (
   int fd,
   int mode
);
#endif /*/ !defined(WINDOWS) /*/

#if defined(__cplusplus)
} /*/ extern "C" /*/
#endif /*/ defined(__cplusplus) /*/

#endif /*/ ndef XOS_PLATFORM_OS_MICROSOFT_WINDOWS_H /*/
