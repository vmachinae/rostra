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
# generic Makefile for framework rostra executable rostra
########################################################################
# Depends: nadir;fila;crono

#
# target
#
rostra_exe_EXETARGET = rostra

########################################################################

#
# user c++ flags
#
rostra_exe_USRCXXFLAGS += \
${rostra_USRCXXFLAGS} \

#
# user defines
#
rostra_exe_USRDEFINES += \
${rostra_USRDEFINES} \
-DDEFAULT_LOGGING_LEVELS_ERROR \
-DXOS_CONSOLE_MAIN_MAIN \

#
# user includes
#
rostra_exe_USRINCLUDES += \
${rostra_USRINCLUDES} \

#
# user libdirs
#
rostra_exe_USRLIBDIRS += \
${rostra_USRLIBDIRS} \

########################################################################

#
# executable .c sources
#
#rostra_exe_EXE_C_SOURCES += \
#${ROSTRA_SRC}/rostra/base/Base.c \

#
# executable .cc sources
#
#rostra_exe_EXE_CC_SOURCES += \
#${ROSTRA_SRC}/rostra/base/Base.cc \

#
# executable .cxx sources
#
#rostra_exe_EXE_CXX_SOURCES += \
#${ROSTRA_SRC}/rostra/base/Base.cxx \

#
# executable .cpp sources
#
rostra_exe_EXE_CPP_SOURCES += \
${ROSTRA_SRC}/xos/app/console/rostra/main_opt.cpp \
${ROSTRA_SRC}/xos/app/console/rostra/main.cpp \

#
# executable .m sources
#
#rostra_exe_EXE_M_SOURCES += \
#${ROSTRA_SRC}/rostra/base/Base.m \

#
# executable .mm sources
#
#rostra_exe_EXE_MM_SOURCES += \
#${ROSTRA_SRC}/rostra/base/Base.mm \


########################################################################

#
# executable libraries
#
rostra_exe_LIBS += \
${rostra_LIBS}
