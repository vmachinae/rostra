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
///   File: compiler.hpp
///
/// Author: $author$
///   Date: 11/16/2019
///////////////////////////////////////////////////////////////////////
#ifndef XOS_PLATFORM_COMPILER_HPP
#define XOS_PLATFORM_COMPILER_HPP

#include "xos/platform/build.hpp"
#include "xos/platform/compiler.h"

#if defined(__GNUC__)
/// Gnu C/C++
/// ...

/// Gnu C/C++ version specific definitions
/// ...
#if (__GNUC__ < 4)
#define PLATFORM_RCAST(type) (type)
#else /// (__GNUC__ < 4) 
#define PLATFORM_RCAST(type) reinterpret_cast<type>
#if (__GNUC_MINOR__ < 3)
#define NO_ARRAY_CONSTRUCTION
#else /// (__GNUC_MINOR__ < 3) 
#endif /// (__GNUC_MINOR__ < 3) 
#endif /// (__GNUC__ < 4) 
/// ...
/// Gnu C/C++ version specific definitions

#if (__cplusplus >= 201100L)
#if !defined(CPP_11)
#define CPP_11
#endif /// !defined(CPP_11) 
#endif /// (__cplusplus >= 201100L) 

#define PLATFORM_CCAST(type) const_cast<type>
#define PLATFORM_DCAST(type) dynamic_cast<type>
#define PLATFORM_SCAST(type) static_cast<type>

#define NO_ARRAY_CONSTRUCTION
#define NO_TEMPLATE_STATIC_MEMBERS

#define CTHIS (*this).
/// ...
/// Gnu C/C++
#endif /// defined(__GNUC__) 

#if defined(OBJC)
/// Objective C++
/// ...
#if !defined(OBJECTIVE_CXX)
#define OBJECTIVE_CXX
#endif /// !defined(OBJECTIVE_CXX)
/// ...
/// Objective C++
#endif /// defined(OBJC) 

namespace xos {
namespace platform {

} /// namespace platform
} /// namespace xos

#endif /// ndef XOS_PLATFORM_COMPILER_HPP
