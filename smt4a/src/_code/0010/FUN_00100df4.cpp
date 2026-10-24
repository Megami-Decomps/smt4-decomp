/* NON_MATCHING: needs --cpu=5TE --apcs=/interwork/ropi -Ospace and the unit for the callback at 0x100d78 (libcFormatAppendByteBounded); then only the scheduling of the argument setup differs (the C library looks built with a different armcc) */
/* vsnprintf: formats at most size-1 bytes into `buffer` through the bounded byte-append callback, NUL-terminates when
 * size is non-zero, and returns the length the format produced. */
#include "common.h"
#include <stdarg.h>

extern "C" {
/* Output state the format engine passes to its byte callbacks. */
struct BoundedOutput {
    u8 *cursor;
    u8 *limit;
};

typedef void (*ByteWriter)(u8 value, BoundedOutput *output);
s32 FUN_002e31ba(const char *format, BoundedOutput *output, va_list arguments, ByteWriter writer);
void libcFormatAppendByte(u8 value, BoundedOutput *output);
void libcFormatAppendByteBounded(u8 value, BoundedOutput *output);

s32 FUN_00100df4(u8 *buffer, u32 size, const char *format, va_list arguments)
{
    BoundedOutput output;
    s32 length;

    output.cursor = buffer;
    if (size != 0) {
        output.limit = buffer + size - 1;
    }
    length = FUN_002e31ba(format, &output, arguments, libcFormatAppendByteBounded);
    if (size != 0) {
        libcFormatAppendByte(0, &output);
    }
    return length;
}
}
