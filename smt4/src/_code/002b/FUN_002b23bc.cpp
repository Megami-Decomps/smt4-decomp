/* NON_MATCHING: retail is C-runtime Thumb code built with different flags (pc-relative callback address via `ldr; add pc`, movs/pop {r2,r3,...} frame); source recovered, needs cflags (e.g. --apcs=/ropi) from Main. */
#include "common.h"

struct FormatBoundedOutput {
    u8 *cursor;
    u8 *end;
};

extern "C" {
void formatWriteBoundedByte(u8 value, FormatBoundedOutput *output);
u32 FUN_002c683e(u32 format, FormatBoundedOutput *output, u32 arguments, void (*writeByte)(u8, FormatBoundedOutput *));
void libcFormatAppendByte(u8 value, u8 **cursor);

/* Formats into a buffer of `size` bytes (a bounded snprintf) and terminates the string when there is room. */
u32 FUN_002b23bc(u8 *buffer, s32 size, u32 format, u32 arguments)
{
    FormatBoundedOutput output;
    output.cursor = buffer;
    output.end = buffer;
    if (size != 0)
        output.end = buffer + size - 1;
    FUN_002c683e(format, &output, arguments, formatWriteBoundedByte);
    if (size != 0)
        libcFormatAppendByte(0, &output.cursor);
    return format;
}
}
