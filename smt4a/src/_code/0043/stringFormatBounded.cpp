#include "common.h"
#include <stdarg.h>
extern "C" {
s32 FUN_0051ec68(char *buffer,u32 size,const char *format,va_list arguments);
/* Format a bounded string using the supplied variadic arguments. */
s32 stringFormatBounded(char *buffer,u32 size,const char *format,...)
{
    va_list arguments;
    va_start(arguments,format);
    s32 result=FUN_0051ec68(buffer,size,format,arguments);
    va_end(arguments);
    return result;
}
}
