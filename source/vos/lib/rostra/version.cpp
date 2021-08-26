///////////////////////////////////////////////////////////////////////
/// Copyright (c) 1988-2021 $organization$
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
///   File: version.cpp
///
/// Author: $author$
///   Date: 4/29/2021
///////////////////////////////////////////////////////////////////////
#include "vos/lib/rostra/version.hpp"

#if !defined(VOS_LIB_ROSTRA_VERSION_NAME)
#define VOS_LIB_ROSTRA_VERSION_NAME   "librostra"
#endif /// !defined(VOS_LIB_ROSTRA_VERSION_NAME)

#if !defined(VOS_LIB_ROSTRA_VERSION_MAJOR)
#define VOS_LIB_ROSTRA_VERSION_MAJOR   0
#endif /// !defined(VOS_LIB_ROSTRA_VERSION_MAJOR)

#if !defined(VOS_LIB_ROSTRA_VERSION_MINOR)
#define VOS_LIB_ROSTRA_VERSION_MINOR   0
#endif /// !defined(VOS_LIB_ROSTRA_VERSION_MINOR)

#if !defined(VOS_LIB_ROSTRA_VERSION_RELEASE)
#define VOS_LIB_ROSTRA_VERSION_RELEASE 0
#endif /// !defined(VOS_LIB_ROSTRA_VERSION_RELEASE)

#if !defined(VOS_LIB_ROSTRA_VERSION_BUILD_DATE)
#define VOS_LIB_ROSTRA_VERSION_BUILD_DATE 4/29/2021
#endif /// !defined(VOS_LIB_ROSTRA_VERSION_BUILD_DATE)

#if !defined(VOS_LIB_ROSTRA_VERSION_BUILD)
#define VOS_LIB_ROSTRA_VERSION_BUILD VOS_LIB_ROSTRA_VERSION_BUILD_DATE
#endif /// !defined(VOS_LIB_ROSTRA_VERSION_BUILD)

#if !defined(VOS_LIB_ROSTRA_VERSION_BUILD_CHARS)
#define VOS_LIB_ROSTRA_VERSION_BUILD_CHARS VOS_2CHARS(VOS_LIB_ROSTRA_VERSION_BUILD)
#endif /// !defined(VOS_LIB_ROSTRA_VERSION_BUILD_CHARS)

namespace vos {
namespace lib {
namespace rostra {

namespace which {
/// class versiont
template <class TExtends = lib::extended::version, class TImplements = typename TExtends::implements>
class exported versiont: virtual public TImplements, public TExtends {
public:
    typedef TImplements implements;
    typedef TExtends extends;
    typedef versiont derives;

    /// constructor / destructor
    versiont(const versiont& copy): extends(copy) {
    }
    versiont(): extends
    (VOS_LIB_ROSTRA_VERSION_NAME, 
     VOS_LIB_ROSTRA_VERSION_MAJOR, VOS_LIB_ROSTRA_VERSION_MINOR, 
     VOS_LIB_ROSTRA_VERSION_RELEASE, VOS_LIB_ROSTRA_VERSION_BUILD_CHARS) {
    }
    virtual ~versiont() {
    }
}; /// class versiont
typedef versiont<> version;
} /// namespace which

/// class version
const lib::version& version::which() {
    static const rostra::which::version version;
    return version;
}

} /// namespace rostra
} /// namespace lib
} /// namespace vos
