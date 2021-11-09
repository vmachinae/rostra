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
#   File: rostra.pri
#
# Author: $author$
#   Date: 8/25/2021
#
# QtCreator project for framework rostra executable
########################################################################
# Depends: nadir;fila;crono

OTHER_PKG = ../../../../../..
OTHER_PRJ = ../../../../..
OTHER_BLD = ..

THIRDPARTY_NAME = thirdparty
THIRDPARTY_PKG = $${OTHER_PKG}/$${THIRDPARTY_NAME}
THIRDPARTY_PRJ = $${OTHER_PRJ}/$${THIRDPARTY_NAME}
THIRDPARTY_SRC = $${OTHER_PRJ}/source/$${THIRDPARTY_NAME}

########################################################################
# nadir
NADIR_VERSION_MAJOR = 0
NADIR_VERSION_MINOR = 0
NADIR_VERSION_RELEASE = 0
NADIR_VERSION = $${NADIR_VERSION_MAJOR}.$${NADIR_VERSION_MINOR}.$${NADIR_VERSION_RELEASE}
NADIR_NAME = nadir
NADIR_GROUP = $${NADIR_NAME}
NADIR_SOURCE = source
NADIR_DIR = $${NADIR_GROUP}/$${NADIR_NAME}-$${NADIR_VERSION}
NADIR_PKG_DIR = $${NADIR_NAME}
NADIR_HOME_BUILD = $${HOME}/build/$${NADIR_NAME}
NADIR_HOME_BUILD_INCLUDE = $${NADIR_HOME_BUILD}/include
NADIR_HOME_BUILD_LIB = $${NADIR_HOME_BUILD}/lib
NADIR_THIRDPARTY_PKG = $${THIRDPARTY_PKG}/$${NADIR_DIR}
NADIR_THIRDPARTY_PRJ = $${THIRDPARTY_PRJ}/$${NADIR_DIR}
NADIR_THIRDPARTY_SRC = $${THIRDPARTY_SRC}/$${NADIR_PKG_DIR}
NADIR_THIRDPARTY_SRC_GROUP = $${NADIR_NAME}
NADIR_THIRDPARTY_SRC_NAME = $${NADIR_NAME}
NADIR_THIRDPARTY_SRC_SOURCE = $${NADIR_SOURCE}
NADIR_THIRDPARTY_SRC_DIR = $${THIRDPARTY_SRC}/$${NADIR_THIRDPARTY_SRC_GROUP}/$${NADIR_THIRDPARTY_SRC_NAME} 
NADIR_PKG = $${OTHER_PKG}/$${NADIR_PKG_DIR}
NADIR_PRJ = $${OTHER_PRJ}/$${NADIR_PKG_DIR}
#NADIR_SRC = $${NADIR_THIRDPARTY_SRC_DIR}/$${NADIR_THIRDPARTY_SRC_SOURCE}
#NADIR_SRC = $${NADIR_THIRDPARTY_PKG}/$${NADIR_SOURCE}
#NADIR_SRC = $${NADIR_THIRDPARTY_PRJ}/$${NADIR_SOURCE}
NADIR_SRC = $${NADIR_PKG}/$${NADIR_SOURCE}
#NADIR_SRC = $${NADIR_PRJ}/$${NADIR_SOURCE}

# nadir INCLUDEPATH
#
nadir_INCLUDEPATH += \
$${NADIR_SRC} \

# nadir DEFINES
#
nadir_DEFINES += \

#nadir_OBJECTIVE_HEADERS += \
#$${NADIR_SRC}/nadir.hh \

#nadir_OBJECTIVE_SOURCES += \
#$${NADIR_SRC}/nadir.mm \

#nadir_HEADERS += \
#$${NADIR_SRC}/nadir.hpp \

#nadir_SOURCES += \
#$${NADIR_SRC}/nadir.cpp \

########################################################################
# fila
FILA_VERSION_MAJOR = 0
FILA_VERSION_MINOR = 0
FILA_VERSION_RELEASE = 0
FILA_VERSION = $${FILA_VERSION_MAJOR}.$${FILA_VERSION_MINOR}.$${FILA_VERSION_RELEASE}
FILA_NAME = fila
FILA_GROUP = $${FILA_NAME}
FILA_SOURCE = source
FILA_DIR = $${FILA_GROUP}/$${FILA_NAME}-$${FILA_VERSION}
FILA_PKG_DIR = $${FILA_NAME}
FILA_HOME_BUILD = $${HOME}/build/$${FILA_NAME}
FILA_HOME_BUILD_INCLUDE = $${FILA_HOME_BUILD}/include
FILA_HOME_BUILD_LIB = $${FILA_HOME_BUILD}/lib
FILA_THIRDPARTY_PKG = $${THIRDPARTY_PKG}/$${FILA_DIR}
FILA_THIRDPARTY_PRJ = $${THIRDPARTY_PRJ}/$${FILA_DIR}
FILA_THIRDPARTY_SRC = $${THIRDPARTY_SRC}/$${FILA_PKG_DIR}
FILA_THIRDPARTY_SRC_GROUP = $${FILA_NAME}
FILA_THIRDPARTY_SRC_NAME = $${FILA_NAME}
FILA_THIRDPARTY_SRC_SOURCE = $${FILA_SOURCE}
FILA_THIRDPARTY_SRC_DIR = $${THIRDPARTY_SRC}/$${FILA_THIRDPARTY_SRC_GROUP}/$${FILA_THIRDPARTY_SRC_NAME} 
FILA_PKG = $${OTHER_PKG}/$${FILA_PKG_DIR}
FILA_PRJ = $${OTHER_PRJ}/$${FILA_PKG_DIR}
#FILA_SRC = $${FILA_THIRDPARTY_SRC_DIR}/$${FILA_THIRDPARTY_SRC_SOURCE}
#FILA_SRC = $${FILA_THIRDPARTY_PKG}/$${FILA_SOURCE}
#FILA_SRC = $${FILA_THIRDPARTY_PRJ}/$${FILA_SOURCE}
FILA_SRC = $${FILA_PKG}/$${FILA_SOURCE}
#FILA_SRC = $${FILA_PRJ}/$${FILA_SOURCE}

# fila INCLUDEPATH
#
fila_INCLUDEPATH += \
$${FILA_SRC} \

# fila DEFINES
#
fila_DEFINES += \

#fila_OBJECTIVE_HEADERS += \
#$${FILA_SRC}/fila.hh \

#fila_OBJECTIVE_SOURCES += \
#$${FILA_SRC}/fila.mm \

#fila_HEADERS += \
#$${FILA_SRC}/fila.hpp \

#fila_SOURCES += \
#$${FILA_SRC}/fila.cpp \

########################################################################
# crono
CRONO_VERSION_MAJOR = 0
CRONO_VERSION_MINOR = 0
CRONO_VERSION_RELEASE = 0
CRONO_VERSION = $${CRONO_VERSION_MAJOR}.$${CRONO_VERSION_MINOR}.$${CRONO_VERSION_RELEASE}
CRONO_NAME = crono
CRONO_GROUP = $${CRONO_NAME}
CRONO_SOURCE = source
CRONO_DIR = $${CRONO_GROUP}/$${CRONO_NAME}-$${CRONO_VERSION}
CRONO_PKG_DIR = $${CRONO_NAME}
CRONO_HOME_BUILD = $${HOME}/build/$${CRONO_NAME}
CRONO_HOME_BUILD_INCLUDE = $${CRONO_HOME_BUILD}/include
CRONO_HOME_BUILD_LIB = $${CRONO_HOME_BUILD}/lib
CRONO_THIRDPARTY_PKG = $${THIRDPARTY_PKG}/$${CRONO_DIR}
CRONO_THIRDPARTY_PRJ = $${THIRDPARTY_PRJ}/$${CRONO_DIR}
CRONO_THIRDPARTY_SRC = $${THIRDPARTY_SRC}/$${CRONO_PKG_DIR}
CRONO_THIRDPARTY_SRC_GROUP = $${CRONO_NAME}
CRONO_THIRDPARTY_SRC_NAME = $${CRONO_NAME}
CRONO_THIRDPARTY_SRC_SOURCE = $${CRONO_SOURCE}
CRONO_THIRDPARTY_SRC_DIR = $${THIRDPARTY_SRC}/$${CRONO_THIRDPARTY_SRC_GROUP}/$${CRONO_THIRDPARTY_SRC_NAME} 
CRONO_PKG = $${OTHER_PKG}/$${CRONO_PKG_DIR}
CRONO_PRJ = $${OTHER_PRJ}/$${CRONO_PKG_DIR}
#CRONO_SRC = $${CRONO_THIRDPARTY_SRC_DIR}/$${CRONO_THIRDPARTY_SRC_SOURCE}
#CRONO_SRC = $${CRONO_THIRDPARTY_PKG}/$${CRONO_SOURCE}
#CRONO_SRC = $${CRONO_THIRDPARTY_PRJ}/$${CRONO_SOURCE}
CRONO_SRC = $${CRONO_PKG}/$${CRONO_SOURCE}
#CRONO_SRC = $${CRONO_PRJ}/$${CRONO_SOURCE}

# crono INCLUDEPATH
#
crono_INCLUDEPATH += \
$${CRONO_SRC} \

# crono DEFINES
#
crono_DEFINES += \

#crono_OBJECTIVE_HEADERS += \
#$${CRONO_SRC}/crono.hh \

#crono_OBJECTIVE_SOURCES += \
#$${CRONO_SRC}/crono.mm \

#crono_HEADERS += \
#$${CRONO_SRC}/crono.hpp \

#crono_SOURCES += \
#$${CRONO_SRC}/crono.cpp \

########################################################################
# rostra
ROSTRA_NAME = rostra
ROSTRA_SOURCE = source

ROSTRA_PKG = ../../../../..
ROSTRA_BLD = ../..

ROSTRA_PRJ = $${ROSTRA_PKG}
ROSTRA_BIN = $${ROSTRA_BLD}/bin
ROSTRA_LIB = $${ROSTRA_BLD}/lib
ROSTRA_SRC = $${ROSTRA_PKG}/$${ROSTRA_SOURCE}

# rostra BUILD_CONFIG
#
CONFIG(debug, debug|release) {
BUILD_CONFIG = Debug
rostra_DEFINES += DEBUG_BUILD
} else {
BUILD_CONFIG = Release
rostra_DEFINES += RELEASE_BUILD
} # CONFIG(debug, debug|release)

# rostra INCLUDEPATH
#
rostra_INCLUDEPATH += \
$${ROSTRA_SRC} \
$${crono_INCLUDEPATH} \
$${fila_INCLUDEPATH} \
$${nadir_INCLUDEPATH} \
$${build_rostra_INCLUDEPATH} \

# rostra DEFINES
#
rostra_DEFINES += \
$${nadir_DEFINES} \
$${fila_DEFINES} \
$${crono_DEFINES} \
$${build_rostra_DEFINES} \

# rostra LIBS
#
rostra_LIBS += \
-L$${ROSTRA_LIB}/lib$${ROSTRA_NAME} \
-l$${ROSTRA_NAME} \

