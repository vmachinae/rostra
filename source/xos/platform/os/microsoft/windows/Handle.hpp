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
///   File: Handle.hpp
///
/// Author: $author$
///   Date: 1/3/2020
///////////////////////////////////////////////////////////////////////
#ifndef XOS_PLATFORM_OS_MICROSOFT_WINDOWS_HANDLE_HPP
#define XOS_PLATFORM_OS_MICROSOFT_WINDOWS_HANDLE_HPP

#include "xos/platform/os/microsoft/windows/Handle.h"
#include "xos/base/logged.hpp"

namespace xos {
namespace platform {
namespace os {
namespace microsoft {
namespace windows {

class exported Handle;
class exported Mutex;
class exported Semaphore;
class exported Thread;

namespace crt {
class exported Thread;
} /// namespace crt

typedef extended::logged HandleExtends;
typedef HandleExtends::implements HandleImplements;
/// class Handle
class exported Handle: virtual public HandleImplements, public HandleExtends {
public:
    typedef HandleImplements implements;
    typedef HandleExtends extends;
    typedef Handle derives;

    /// constructor / destructor
    Handle(bool isLogged): extends(isLogged) {
    }
    Handle(): extends(false) {
    }
    virtual ~Handle() {
    }
private:
    Handle(const Handle& copy) {
    }

public:
    /// Wait... / Close...
    virtual DWORD WaitForSingleObject(DWORD dwMilliseconds) {
        DWORD dwStatus = WAIT_FAILED;
        return dwStatus;
    }
    virtual BOOL CloseHandle() {
        BOOL success = TRUE;
        return success;
    }

    /// ...LastError
    virtual DWORD SetLastError(DWORD dwLastError) {
        DWORD &dwLastError_ = LastError();
        dwLastError_ = dwLastError;
        return dwLastError_;
    }
    virtual DWORD GetLastError() {
        DWORD &dwLastError_ = LastError();
        return dwLastError_;
    }
    static DWORD& LastError() {
        static DWORD dwLastError = 0;
        return dwLastError;
    }

    /// To...
    virtual Handle* ToHandle() const {
        return ((Handle*)this);
    }
    virtual Mutex* ToMutex() const {
        return ((Mutex*)0);
    }
    virtual Semaphore* ToSemaphore() const {
        return ((Semaphore*)0);
    }
    virtual Thread* ToThread() const {
        return ((Thread*)0);
    }
    virtual crt::Thread* ToCrtThread() const {
        return ((crt::Thread*)0);
    }
}; /// class Handle

} /// namespace windows
} /// namespace microsoft
} /// namespace os
} /// namespace platform
} /// namespace xos

#endif /// ndef XOS_PLATFORM_OS_MICROSOFT_WINDOWS_HANDLE_HPP 
