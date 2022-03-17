########################################################################
# Copyright (c) 1988-2021 $organization$
#
# This software is provided by the author and contributors ``as is''
# and any express or implied warranties, including, but not limited to,
# the implied warranties of merchantability and fitness for a particular
# purpose are disclaimed. In no event shall the author or contributors
# be liable for any direct, indirect, incidental, special, exemplary,
# or consequential damages (including, but not limited to, procurement
# of substitute goods or services; loss of use, data, or profits; or
# business interruption) however caused and on any theory of liability,
# whether in contract, strict liability, or tort (including negligence
# or otherwise) arising in any way out of the use of this software,
# even if advised of the possibility of such damage.
#
#   File: Makefile
#
# Author: $author$
#   Date: 12/29/2021
#
# generic Makefile for framework rostra library librostra
########################################################################
# Depends: nadir;fila;crono

#
# target
#
librostra_LIBTARGET = librostra.${LIBEXT}

########################################################################
#
# build date
#
librostra_BUILD_DATE = $(shell tdate)

#
# user c++ flags
#
librostra_USRCXXFLAGS += \
${rostra_USRCXXFLAGS} \

#
# user defines
#
librostra_USRDEFINES += \
${rostra_USRDEFINES} \
-DDEFAULT_LOGGING_LEVELS_ERROR \
-DXOS_LIB_ROSTRA_VERSION_BUILD_DATE=${librostra_BUILD_DATE} \

#
# user includes
#
librostra_USRINCLUDES += \
${rostra_USRINCLUDES} \

#
# user libdirs
#
librostra_USRLIBDIRS += \
${rostra_USRLIBDIRS} \

########################################################################

#
# library .c sources
#
#librostra_LIB_C_SOURCES += \
#${ROSTRA_SRC}/rostra/base/Base.c \

#
# library .cc sources
#
#librostra_LIB_CC_SOURCES += \
#${ROSTRA_SRC}/rostra/base/Base.cc \

#
# library .cxx sources
#
#librostra_LIB_CXX_SOURCES += \
#${ROSTRA_SRC}/rostra/base/Base.cxx \

#
# library .cpp sources
#
librostra_LIB_CPP_SOURCES += \
${ROSTRA_SRC}/xos/lib/rostra/version.cpp \

#
# library .m sources
#
#librostra_LIB_M_SOURCES += \
#${ROSTRA_SRC}/rostra/base/Base.m \

#
# library .mm sources
#
#librostra_LIB_MM_SOURCES += \
#${ROSTRA_SRC}/rostra/base/Base.mm \


########################################################################


