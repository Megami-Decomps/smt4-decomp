#include "common.h"
#include <stdarg.h>
extern "C" {
s32 libcVformat(char *buffer,u32 size,const char *format,va_list arguments);
/* Format a bounded string using the supplied variadic arguments. */
s32 stringFormatBounded(char *buffer,u32 size,const char *format,...)
{
    va_list arguments;
    va_start(arguments,format);
    s32 result=libcVformat(buffer,size,format,arguments);
    va_end(arguments);
    return result;
}
}
