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
///   File: kern.h
///
/// Author: $author$
///   Date: 1/11/2020
///////////////////////////////////////////////////////////////////////
/*/
#ifndef XOS_PLATFORM_OS_MACH_KERN_H
#define XOS_PLATFORM_OS_MACH_KERN_H

#include "xos/platform/os.h"

#if defined(__cplusplus)
extern "C" {
#endif /*/ defined(__cplusplus) /*/

#if !defined(MACH) && !defined(APPLEOS)
/*/
/// mach kern
/// ...
/*/
/*/ enum kern_return_t /*/
typedef	int kern_return_t;
enum {
    KERN_SUCCESS ,
    KERN_INVALID_ADDRESS ,
    KERN_PROTECTION_FAILURE ,
    KERN_NO_SPACE ,
    KERN_INVALID_ARGUMENT ,
    KERN_FAILURE ,
    KERN_RESOURCE_SHORTAGE ,
    KERN_NOT_RECEIVER ,
    KERN_NO_ACCESS ,
    KERN_MEMORY_FAILURE ,
    KERN_MEMORY_ERROR ,
    KERN_ALREADY_IN_SET ,
    KERN_NOT_IN_SET ,
    KERN_NAME_EXISTS ,
    KERN_ABORTED ,
    KERN_INVALID_NAME ,
    KERN_INVALID_TASK ,
    KERN_INVALID_RIGHT ,
    KERN_INVALID_VALUE ,
    KERN_UREFS_OVERFLOW ,
    KERN_INVALID_CAPABILITY ,
    KERN_RIGHT_EXISTS ,
    KERN_INVALID_HOST ,
    KERN_MEMORY_PRESENT ,
    KERN_MEMORY_DATA_MOVED ,
    KERN_MEMORY_RESTART_COPY ,
    KERN_INVALID_PROCESSOR_SET ,
    KERN_POLICY_LIMIT ,
    KERN_INVALID_POLICY ,
    KERN_INVALID_OBJECT ,
    KERN_ALREADY_WAITING ,
    KERN_DEFAULT_SET ,
    KERN_EXCEPTION_PROTECTED ,
    KERN_INVALID_LEDGER ,
    KERN_INVALID_MEMORY_CONTROL ,
    KERN_INVALID_SECURITY ,
    KERN_NOT_DEPRESSED ,
    KERN_TERMINATED ,
    KERN_LOCK_SET_DESTROYED ,
    KERN_LOCK_UNSTABLE ,
    KERN_LOCK_OWNED ,
    KERN_LOCK_OWNED_SELF ,
    KERN_SEMAPHORE_DESTROYED ,
    KERN_RPC_SERVER_TERMINATED ,
    KERN_RPC_TERMINATE_ORPHAN ,
    KERN_RPC_CONTINUE_ORPHAN ,
    KERN_NOT_SUPPORTED ,
    KERN_NODE_DOWN ,
    KERN_NOT_WAITING ,
    KERN_OPERATION_TIMED_OUT ,
    KERN_CODESIGN_ERROR ,
    KERN_RETURN_MAX = 0x100
};/*/ enum kern_return_t /*/
/*/
/// ...
/// mach kern
/*/
#endif /*/ !defined(MACH) && !defined(APPLEOS) /*/

#if defined(__cplusplus)
} /*/ extern "C" /*/
#endif /*/ defined(__cplusplus) /*/

#endif /*/ ndef XOS_PLATFORM_OS_MACH_KERN_H /*/
