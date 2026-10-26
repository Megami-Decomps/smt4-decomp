#include "common.h"
#include <stdarg.h>
extern "C" {
s32 FUN_0051ec68(char *buffer,u32 size,const char *format,va_list arguments);
/* Format an unbounded string using the common formatting engine. */
s32 stringFormatUnbounded(char *buffer,const char *format,...)
{
    va_list arguments; va_start(arguments,format);
    s32 result=FUN_0051ec68(buffer,0x7FFFFFFF,format,arguments);
    va_end(arguments); return result;
}
}
