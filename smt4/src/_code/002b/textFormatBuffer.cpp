/* NON_MATCHING: varargs stack layout, Thumb mov encoding, and callback-address materialization differ. */
#include "common.h"
#include <stdarg.h>

extern "C" {
typedef void (*ByteWriter)(u8 value, u8 **cursor);
s32 FUN_002c683e(const char *format, u8 **cursor, va_list arguments, ByteWriter writer);
void libcFormatAppendByte(u8 value, u8 **cursor);

/* Formats a string and appends its terminating zero byte. */
s32 textFormatBuffer(u8 *buffer, const char *format, ...)
{
    va_list arguments;
    va_start(arguments, format);
    s32 length = FUN_002c683e(format, &buffer, arguments, libcFormatAppendByte);
    libcFormatAppendByte(0, &buffer);
    va_end(arguments);
    return length;
}
}
