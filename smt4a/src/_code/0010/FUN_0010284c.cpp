/* NON_MATCHING: needs --cpu=5TE --apcs=/interwork/ropi -Ospace (the C library is position independent); with them only the schedule of the argument setup differs */
/* NON_MATCHING: needs --cpu=5TE --apcs=/interwork/ropi -Ospace (the C library is position independent); with them only the schedule of the argument setup differs (retail: ldr r3 first, mov r1,sp before the state store) */
/* vsprintf: formats into `buffer` through the byte-append callback and NUL-terminates; returns the length. */
#include "common.h"
#include <stdarg.h>

extern "C" {
/* Output state the format engine passes to its byte callback. */
struct FormatOutput {
    u8 *cursor;
    u32 unk04;
};

typedef void (*ByteWriter)(u8 value, FormatOutput *output);
s32 FUN_002e31ba(const char *format, FormatOutput *output, va_list arguments, ByteWriter writer);
void libcFormatAppendByte(u8 value, FormatOutput *output);

s32 FUN_0010284c(u8 *buffer, const char *format, va_list arguments)
{
    FormatOutput output;
    s32 length;

    output.cursor = buffer;
    length = FUN_002e31ba(format, &output, arguments, libcFormatAppendByte);
    libcFormatAppendByte(0, &output);
    return length;
}
}
