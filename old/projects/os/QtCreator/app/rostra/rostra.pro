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
#   File: rostra.pro
#
# Author: $author$
#   Date: 8/25/2021
#
# QtCreator .pro file for rostra executable rostra
########################################################################
include(../../../../../build/QtCreator/rostra.pri)
include(../../../../QtCreator/rostra.pri)
include(../../rostra.pri)
include(../../../../QtCreator/app/rostra/rostra.pri)

TARGET = $${rostra_exe_TARGET}

########################################################################
# INCLUDEPATH
#
INCLUDEPATH += \
$${rostra_exe_INCLUDEPATH} \

# DEFINES
# 
DEFINES += \
$${rostra_exe_DEFINES} \

########################################################################
# OBJECTIVE_HEADERS
#
OBJECTIVE_HEADERS += \
$${rostra_exe_OBJECTIVE_HEADERS} \

# OBJECTIVE_SOURCES
#
OBJECTIVE_SOURCES += \
$${rostra_exe_OBJECTIVE_SOURCES} \

########################################################################
# HEADERS
#
HEADERS += \
$${rostra_exe_HEADERS} \
$${rostra_exe_OBJECTIVE_HEADERS} \

# SOURCES
#
SOURCES += \
$${rostra_exe_SOURCES} \

########################################################################
# FRAMEWORKS
#
FRAMEWORKS += \
$${rostra_exe_FRAMEWORKS} \

# LIBS
#
LIBS += \
$${rostra_exe_LIBS} \
$${FRAMEWORKS} \


