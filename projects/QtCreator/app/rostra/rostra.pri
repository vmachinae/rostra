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
# QtCreator .pri file for rostra executable rostra
########################################################################

########################################################################
# rostra

# rostra_exe TARGET
#
rostra_exe_TARGET = rostra

# rostra_exe INCLUDEPATH
#
rostra_exe_INCLUDEPATH += \
$${rostra_INCLUDEPATH} \

# rostra_exe DEFINES
#
rostra_exe_DEFINES += \
$${rostra_DEFINES} \
DEFAULT_LOGGING_LEVELS_ERROR \
VOS_APP_CONSOLE_ROSTRA_MAIN_INSTANCE \

########################################################################
# rostra_exe OBJECTIVE_HEADERS
#
#rostra_exe_OBJECTIVE_HEADERS += \
#$${ROSTRA_SRC}/rostra/app/console/rostra/main.hh \

# rostra_exe OBJECTIVE_SOURCES
#
#rostra_exe_OBJECTIVE_SOURCES += \
#$${ROSTRA_SRC}/rostra/app/console/rostra/main.mm \

########################################################################
# rostra_exe HEADERS
#
rostra_exe_HEADERS += \
$${NADIR_SRC}/vos/base/exception.hpp \
$${NADIR_SRC}/vos/base/attached.hpp \
$${NADIR_SRC}/vos/base/created.hpp \
$${NADIR_SRC}/vos/base/locked.hpp \
$${NADIR_SRC}/vos/base/logged.hpp \
$${NADIR_SRC}/vos/base/logger.hpp \
\
$${NADIR_SRC}/vos/mt/mutex.hpp \
$${NADIR_SRC}/vos/mt/posix/timed.hpp \
$${NADIR_SRC}/vos/mt/posix/mutex.hpp \
$${NADIR_SRC}/vos/mt/linux/mutex.hpp \
$${NADIR_SRC}/vos/mt/apple/osx/mutex.hpp \
$${NADIR_SRC}/vos/mt/os/mutex.hpp \
$${NADIR_SRC}/vos/mt/os/os.hpp \
\
$${NADIR_SRC}/vos/console/io.hpp \
$${NADIR_SRC}/vos/console/logger.hpp \
$${NADIR_SRC}/vos/console/main.hpp \
$${NADIR_SRC}/vos/console/main_main.hpp \
$${NADIR_SRC}/vos/console/getopt/main_opt.hpp \
$${NADIR_SRC}/vos/console/getopt/main.hpp \
\
$${CRONO_SRC}/vos/logger/level.hpp \
$${CRONO_SRC}/vos/logger/levels.hpp \
$${CRONO_SRC}/vos/logger/function.hpp \
$${CRONO_SRC}/vos/logger/location.hpp \
$${CRONO_SRC}/vos/logger/message.hpp \
$${CRONO_SRC}/vos/logger/implement.hpp \
$${CRONO_SRC}/vos/logger/defines.hpp \
\
$${ROSTRA_SRC}/vos/app/console/rostra/main_opt.hpp \
$${ROSTRA_SRC}/vos/app/console/rostra/main.hpp \

# rostra_exe SOURCES
#
rostra_exe_SOURCES += \
$${NADIR_SRC}/vos/base/exception.cpp \
$${NADIR_SRC}/vos/base/attached.cpp \
$${NADIR_SRC}/vos/base/created.cpp \
$${NADIR_SRC}/vos/base/locked.cpp \
$${NADIR_SRC}/vos/base/logged.cpp \
$${NADIR_SRC}/vos/base/logger.cpp \
\
$${NADIR_SRC}/vos/mt/posix/timed.cpp \
$${NADIR_SRC}/vos/mt/posix/mutex.cpp \
$${NADIR_SRC}/vos/mt/os/os.cpp \
\
$${NADIR_SRC}/vos/console/main_main.cpp \
\
$${CRONO_SRC}/vos/logger/level.cpp \
$${CRONO_SRC}/vos/logger/levels.cpp \
$${CRONO_SRC}/vos/logger/function.cpp \
$${CRONO_SRC}/vos/logger/location.cpp \
$${CRONO_SRC}/vos/logger/message.cpp \
$${CRONO_SRC}/vos/logger/implement.cpp \
$${CRONO_SRC}/vos/logger/defines.cpp \
\
$${ROSTRA_SRC}/vos/app/console/rostra/main_opt.cpp \
$${ROSTRA_SRC}/vos/app/console/rostra/main.cpp \

########################################################################
# rostra_exe FRAMEWORKS
#
rostra_exe_FRAMEWORKS += \
$${rostra_FRAMEWORKS} \

# rostra_exe LIBS
#
rostra_exe_LIBS += \
$${rostra_LIBS} \


