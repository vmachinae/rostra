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
#   File: librostra.pro
#
# Author: $author$
#   Date: 8/25/2021
#
# QtCreator .pro file for rostra library librostra
########################################################################
include(../../../../../build/QtCreator/rostra.pri)
include(../../../../QtCreator/rostra.pri)
include(../../rostra.pri)
include(../../../../QtCreator/lib/librostra/librostra.pri)

TARGET = $${librostra_TARGET}
TEMPLATE = $${librostra_TEMPLATE}
CONFIG += $${librostra_CONFIG}

########################################################################
# INCLUDEPATH
#
INCLUDEPATH += \
$${librostra_INCLUDEPATH} \

# DEFINES
# 
DEFINES += \
$${librostra_DEFINES} \

########################################################################
# OBJECTIVE_HEADERS
#
OBJECTIVE_HEADERS += \
$${librostra_OBJECTIVE_HEADERS} \

# OBJECTIVE_SOURCES
#
OBJECTIVE_SOURCES += \
$${librostra_OBJECTIVE_SOURCES} \

########################################################################
# HEADERS
#
HEADERS += \
$${librostra_HEADERS} \
$${librostra_OBJECTIVE_HEADERS} \

# SOURCES
#
SOURCES += \
$${librostra_SOURCES} \

########################################################################


