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
///   File: mach.h
///
/// Author: $author$
///   Date: 1/11/2020
///////////////////////////////////////////////////////////////////////
/*/
#ifndef XOS_PLATFORM_OS_MACH_MACH_H
#define XOS_PLATFORM_OS_MACH_MACH_H

#include "xos/platform/os/mach/kern.h"

#if defined(__cplusplus)
extern "C" {
#endif /*/ defined(__cplusplus) /*/

#if !defined(MACH) && !defined(APPLEOS)
/*/
/// mach
/// ...
/*/
typedef pointer_t mach_port_t;

typedef int clock_res_t; /* clock resolution type */
struct mach_timespec {
    unsigned int    tv_sec;  /* seconds */
    clock_res_t     tv_nsec; /* nanoseconds */
};
typedef struct mach_timespec mach_timespec_t;

typedef int sync_policy_t;
enum {
    SYNC_POLICY_FIFO           = 0x0,
    SYNC_POLICY_FIXED_PRIORITY = 0x1,
    SYNC_POLICY_REVERSED       = 0x2,
    SYNC_POLICY_ORDER_MASK     = 0x3,
    SYNC_POLICY_LIFO           = (SYNC_POLICY_FIFO|SYNC_POLICY_REVERSED),
    SYNC_POLICY_MAX            = 0x7
};
/*/
/// ...
/// mach
/*/
#endif /*/ !defined(MACH) && !defined(APPLEOS) /*/

#if defined(__cplusplus)
} /*/ extern "C" /*/
#endif /*/ defined(__cplusplus) /*/

#endif /*/ ndef XOS_PLATFORM_OS_MACH_MACH_H /*/
