/* NON_MATCHING: the C library is position independent: needs --cpu=5TE --apcs=/interwork/ropi -Ospace (as libc_vsprintf). */
/* sprintf: formats into `buffer` through the byte-append callback and NUL-terminates; returns the length. */
#include "common.h"
#include <stdarg.h>

extern "C" {
/* Output state the format engine passes to its byte callback. */
struct FormatOutput {
    u8 *cursor;
    u32 unk04;
};

typedef void (*ByteWriter)(u8 value, FormatOutput *output);
s32 FUN_002c683e(const char *format, FormatOutput *output, va_list arguments, ByteWriter writer);
void libcFormatAppendByte(u8 value, FormatOutput *output);

s32 __2sprintf(u8 *buffer, const char *format, ...)
{
    FormatOutput output;
    va_list arguments;
    s32 length;

    va_start(arguments, format);
    output.cursor = buffer;
    length = FUN_002c683e(format, &output, arguments, libcFormatAppendByte);
    libcFormatAppendByte(0, &output);
    va_end(arguments);
    return length;
}
}
