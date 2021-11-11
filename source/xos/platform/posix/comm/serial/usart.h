/*/
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
///   File: usart.h
///
/// Author: $author$
///   Date: 3/20/2021
///////////////////////////////////////////////////////////////////////
/*/
#ifndef XOS_PLATFORM_POSIX_COMM_SERIAL_USART_H
#define XOS_PLATFORM_POSIX_COMM_SERIAL_USART_H

#include "xos/platform/configure.h"
#include <termios.h>
#include <fcntl.h>

#define COMM_DEVICE_NUMBERX(number) "" #number ""
#define COMM_DEVICE_NUMBER_CHARS(number) COMM_DEVICE_NUMBERX(number)

#define PLATFORM_COMM_SERIAL_USART_BAUD_110    B110   
#define PLATFORM_COMM_SERIAL_USART_BAUD_300    B300   
#define PLATFORM_COMM_SERIAL_USART_BAUD_600    B600   
#define PLATFORM_COMM_SERIAL_USART_BAUD_1200   B1200  
#define PLATFORM_COMM_SERIAL_USART_BAUD_2400   B2400  
#define PLATFORM_COMM_SERIAL_USART_BAUD_4800   B4800  
#define PLATFORM_COMM_SERIAL_USART_BAUD_9600   B9600  
#define PLATFORM_COMM_SERIAL_USART_BAUD_14400  B14400 
#define PLATFORM_COMM_SERIAL_USART_BAUD_19200  B19200 
#define PLATFORM_COMM_SERIAL_USART_BAUD_38400  B38400 
#define PLATFORM_COMM_SERIAL_USART_BAUD_56000  B56000 
#define PLATFORM_COMM_SERIAL_USART_BAUD_57600  B57600 
#define PLATFORM_COMM_SERIAL_USART_BAUD_115200 B115200
#define PLATFORM_COMM_SERIAL_USART_BAUD_128000 B128000
#define PLATFORM_COMM_SERIAL_USART_BAUD_256000 B256000

#define PLATFORM_COMM_SERIAL_USART_BITS_5 CS5
#define PLATFORM_COMM_SERIAL_USART_BITS_6 CS6
#define PLATFORM_COMM_SERIAL_USART_BITS_7 CS7
#define PLATFORM_COMM_SERIAL_USART_BITS_8 CS8

#define PLATFORM_COMM_SERIAL_USART_STOP_BITS_1  0
#define PLATFORM_COMM_SERIAL_USART_STOP_BITS_2  CSTOPB

#define PLATFORM_COMM_SERIAL_USART_PARITY_NONE 0
#define PLATFORM_COMM_SERIAL_USART_PARITY_ODD  (PARENB | PARODD)
#define PLATFORM_COMM_SERIAL_USART_PARITY_EVEN PARENB

#if defined(BSD)
#define PLATFORM_COMM_SERIAL_USART_RTSCTS (CRTS_IFLOW | CCTS_OFLOW)
#else /*/ defined(BSD) /*/
#define PLATFORM_COMM_SERIAL_USART_RTSCTS CRTSCTS
#endif /*/ defined(BSD) /*/
#define PLATFORM_COMM_SERIAL_USART_XONXOFF (IXON | IXOFF)

#define DEFAULT_PLATFORM_COMM_SERIAL_USART_DEVICE_PATH "/dev/"
#define DEFAULT_PLATFORM_COMM_SERIAL_USART_DEVICE_NAME_BASE "cu"
#if defined(BSD)
#define DEFAULT_PLATFORM_COMM_SERIAL_USART_DEVICE_NAME_EXTENSION ".usbserial"
#define DEFAULT_PLATFORM_COMM_SERIAL_USART_DEVICE_NUMBER_CHARS ""
#else /*/ defined(BSD) /*/
#define DEFAULT_PLATFORM_COMM_SERIAL_USART_DEVICE_NAME_EXTENSION "a"
#define DEFAULT_PLATFORM_COMM_SERIAL_USART_DEVICE_NUMBER 0
#define DEFAULT_PLATFORM_COMM_SERIAL_USART_DEVICE_NUMBER_CHARS \
    COMM_DEVICE_NUMBER_CHARS(DEFAULT_PLATFORM_COMM_SERIAL_USART_DEVICE_NUMBER)
#endif /*/ defined(BSD) /*/

#define DEFAULT_PLATFORM_COMM_SERIAL_USART_DEVICE_NAME \
    DEFAULT_PLATFORM_COMM_SERIAL_USART_DEVICE_NAME_BASE \
    DEFAULT_PLATFORM_COMM_SERIAL_USART_DEVICE_NAME_EXTENSION \
    DEFAULT_PLATFORM_COMM_SERIAL_USART_DEVICE_NUMBER_CHARS \

#if defined(__cplusplus)
extern "C" {
#endif /*/ defined(__cplusplus) /*/

#if defined(__cplusplus)
} /*/ extern "C" /*/
#endif /*/ defined(__cplusplus) /*/

#endif /*/ XOS_PLATFORM_POSIX_COMM_SERIAL_USART_H /*/
