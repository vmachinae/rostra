%########################################################################
%# Copyright (c) 1988-2020 $organization$
%#
%# This software is provided by the author and contributors ``as is'' 
%# and any express or implied warranties, including, but not limited to, 
%# the implied warranties of merchantability and fitness for a particular 
%# purpose are disclaimed. In no event shall the author or contributors 
%# be liable for any direct, indirect, incidental, special, exemplary, 
%# or consequential damages (including, but not limited to, procurement 
%# of substitute goods or services; loss of use, data, or profits; or 
%# business interruption) however caused and on any theory of liability, 
%# whether in contract, strict liability, or tort (including negligence 
%# or otherwise) arising in any way out of the use of this software, 
%# even if advised of the possibility of such damage.
%#
%#   File: platform-what-h.t
%#
%# Author: $author$
%#   Date: 1/15/2020
%########################################################################
%with(%
%include_path,%(%else-then(%include_path%,%(%filepath(%input%)%)%)%)%,%
%is_platform,%(%else-then(%is_platform%,%(%is_Platform%)%)%)%,%
%platform,%(%else-then(%if-no(%is_platform%,,%(%platform%)%)%,%(%if-no(%is_platform%,,%(platform)%)%)%)%)%,%
%Platform,%(%else-then(%if-no(%is_platform%,,%(%Platform%)%)%,%(%platform%)%)%)%,%
%PLATFORM,%(%else-then(%PLATFORM%,%(%toupper(%Platform%)%)%)%)%,%
%platform,%(%else-then(%_Platform%,%(%tolower(%Platform%)%)%)%)%,%
%is_os,%(%else-then(%is_os%,%(%is_Os%)%)%)%,%
%os,%(%else-then(%if-no(%is_os%,,%(%os%)%)%,%(%if-no(%is_os%,,%(os)%)%)%)%)%,%
%Os,%(%else-then(%if-no(%is_os%,,%(%Os%)%)%,%(%os%)%)%)%,%
%OS,%(%else-then(%OS%,%(%toupper(%Os%)%)%)%)%,%
%os,%(%else-then(%_Os%,%(%tolower(%Os%)%)%)%)%,%
%is_what,%(%else-then(%is_what%,%(%is_What%)%)%)%,%
%what,%(%else-then(%if-no(%is_what%,,%(%what%)%)%,%(%if-no(%is_what%,,%(what)%)%)%)%)%,%
%What,%(%else-then(%if-no(%is_what%,,%(%What%)%)%,%(%what%)%)%)%,%
%WHAT,%(%else-then(%WHAT%,%(%toupper(%What%)%)%)%)%,%
%what,%(%else-then(%_What%,%(%tolower(%What%)%)%)%)%,%
%is_do,%(%else-then(%is_do%,%(%is_Do%)%)%)%,%
%do,%(%else-then(%if-no(%is_do%,,%(%do%)%)%,%(%if-no(%is_do%,,%(do)%)%)%)%)%,%
%Do,%(%else-then(%if-no(%is_do%,,%(%Do%)%)%,%(%do%)%)%)%,%
%DO,%(%else-then(%DO%,%(%toupper(%Do%)%)%)%)%,%
%do,%(%else-then(%_Do%,%(%tolower(%Do%)%)%)%)%,%
%is_undo,%(%else-then(%is_undo%,%(%is_Undo%)%)%)%,%
%undo,%(%else-then(%if-no(%is_undo%,,%(%undo%)%)%,%(%if-no(%is_undo%,,%(un%Do%)%)%)%)%)%,%
%Undo,%(%else-then(%if-no(%is_undo%,,%(%Undo%)%)%,%(%undo%)%)%)%,%
%UNDO,%(%else-then(%UNDO%,%(%toupper(%Undo%)%)%)%)%,%
%undo,%(%else-then(%_Undo%,%(%tolower(%Undo%)%)%)%)%,%
%is_ed,%(%else-then(%is_ed%,%(%is_Ed%)%)%)%,%
%ed,%(%else-then(%if-no(%is_ed%,,%(%ed%)%)%,%(%if-no(%is_ed%,,%(ne)%)%)%)%)%,%
%Ed,%(%else-then(%if-no(%is_ed%,,%(%Ed%)%)%,%(%ed%)%)%)%,%
%ED,%(%else-then(%ED%,%(%toupper(%Ed%)%)%)%)%,%
%ed,%(%else-then(%_Ed%,%(%tolower(%Ed%)%)%)%)%,%
%is_done,%(%else-then(%is_done%,%(%is_Done%)%)%)%,%
%done,%(%else-then(%if-no(%is_done%,,%(%done%)%)%,%(%if-no(%is_done%,,%(%Do%%Ed%)%)%)%)%)%,%
%Done,%(%else-then(%if-no(%is_done%,,%(%Done%)%)%,%(%done%)%)%)%,%
%DONE,%(%else-then(%DONE%,%(%toupper(%Done%)%)%)%)%,%
%done,%(%else-then(%_Done%,%(%tolower(%Done%)%)%)%)%,%
%is_undone,%(%else-then(%is_undone%,%(%is_Undone%)%)%)%,%
%undone,%(%else-then(%if-no(%is_undone%,,%(%undone%)%)%,%(%if-no(%is_undone%,,%(%Undo%%Ed%)%)%)%)%)%,%
%Undone,%(%else-then(%if-no(%is_undone%,,%(%Undone%)%)%,%(%undone%)%)%)%,%
%UNDONE,%(%else-then(%UNDONE%,%(%toupper(%Undone%)%)%)%)%,%
%undone,%(%else-then(%_Undone%,%(%tolower(%Undone%)%)%)%)%,%
%%(/*/
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
///   File: %What%.h
///
/// Author: $author$
///   Date: %date()%
///////////////////////////////////////////////////////////////////////
/*/
#ifndef XOS_PLATFORM_%WHAT%_H
#define XOS_PLATFORM_%WHAT%_H

#include "xos/platform/os.h"

typedef pointer_t %Platform%_%What%_t;
typedef pointer_t %Platform%_%What%_attr_t;

/*/ enum %Platform%_%What%_attr_none_t /*/
typedef int %Platform%_%What%_attr_none_t;
enum {
    %Platform%_%What%_attr_none = 0
}; /*/ enum %Platform%_%What%_attr_none_t /*/

/*/ enum %Platform%_%What%_error_t /*/ 
typedef int %Platform%_%What%_error_t;
enum {
    %Platform%_%What%_error_success = 0,
    %Platform%_%What%_error_failed,
    %Platform%_%What%_error_busy,
    %Platform%_%What%_error_timeout,
    %Platform%_%What%_error_interrupted
}; /*/ enum %Platform%_%What%_error_t /*/

/*/ struct %Platform%_%What%_timeout /*/
typedef struct %Platform%_%What%_timeout %Platform%_%What%_timeout_t;
struct %Platform%_%What%_timeout {
    seconds_t tv_sec;
    nseconds_t tv_nsec;    
}; /*/ struct %Platform%_%What%_timeout /*/

extern %Platform%_%What%_error_t %Platform%_%What%_create(%Platform%_%What%_t* %What%, %Platform%_%What%_attr_t attr);
extern %Platform%_%What%_error_t %Platform%_%What%_destroy(%Platform%_%What%_t* %What%);
extern %Platform%_%What%_error_t %Platform%_%What%_%Do%(%Platform%_%What%_t* %What%);
extern %Platform%_%What%_error_t %Platform%_%What%_time_%Do%(%Platform%_%What%_t* %What%, %Platform%_%What%_timeout_t* timeout);
extern %Platform%_%What%_error_t %Platform%_%What%_timed_%Do%(%Platform%_%What%_t* %What%, %Platform%_%What%_timeout_t* timeout);
extern %Platform%_%What%_error_t %Platform%_%What%_try_%Do%(%Platform%_%What%_t* %What%);
extern %Platform%_%What%_error_t %Platform%_%What%_%Undo%(%Platform%_%What%_t* %What%);

#endif /*/ ndef XOS_PLATFORM_%WHAT%_H /*/
)%)%