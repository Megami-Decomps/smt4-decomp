/* NON_MATCHING: loop, block layout, pool literals and instruction shapes match retail; only register numbering (retail: r4 cursor, r5 count, r6 command, r8 pad, r9 source) and the tail's header stores (retail keeps `str` + `str [r4], #4`, the build merges into stm) differ. */
#include "common.h"

extern "C" {
void __aeabi_memcpy4(void* destination, const void* source, u32 byteCount);

// Pack register writes into command blocks, padding each block to an even word count.
u32* FUN_00192f98(u32 unused, u32* output, u32 command, const u32* values, u32 count)
{
    for (;;) {
        if (count <= 128)
            break;
        u32* destination = output + 2;
        const u32* source = values + 1;
        output[0] = values[0];
        output[1] = command | 0x07ff0000;
        __aeabi_memcpy4(destination, source, 0x1fc);
        destination += 127;
        *destination = 0xead0fead;
        values = source + 127;
        output = destination + 1;
        count -= 128;
    }
    output[0] = values[0];
    u32* cursor = output + 1;
    *cursor++ = (count << 20) + 0xfff00000 | command | 0x000f0000;
    __aeabi_memcpy4(cursor, values + 1, (count - 1) * sizeof(u32));
    output = cursor + count - 1;
    if ((count & 1) == 0) {
        *output++ = 0xead0fead;
    }
    return output;
}
}
