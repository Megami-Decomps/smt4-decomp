/* NON_MATCHING: Arm C library Thumb code (pc-relative callback address, push {r2,r3,...} frame): with cflags --cpu=5TE --apcs=/interwork/ropi -O3 -Ospace only two instruction pairs are ordered differently (movs r5,r2/movs r4,r1 and mov r1,sp/str). */
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
u32 libc_vsnprintf(u8 *buffer, s32 size, u32 format, u32 arguments)
{
    FormatBoundedOutput output = {buffer, size != 0 ? buffer + size - 1 : buffer};
    u32 written = FUN_002c683e(format, &output, arguments, formatWriteBoundedByte);
    if (size != 0)
        libcFormatAppendByte(0, &output.cursor);
    return written;
}
}
