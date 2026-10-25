/* NON_MATCHING: command block semantics recovered; retail uses a tail block loop and different cursor register allocation. */
#include "common.h"

extern "C" {
void __aeabi_memcpy4(void* destination, const void* source, u32 byteCount);

// Pack register writes into command blocks, padding each block to an even word count.
u32* FUN_00192f98(u32 unused, u32* output, u32 command, const u32* values, u32 count)
{
    for (; count > 128; count -= 128) {
        output[0] = values[0];
        output[1] = command | 0x07ff0000;
        __aeabi_memcpy4(output + 2, values + 1, 0x1fc);
        output[129] = 0xead0fead;
        values += 128;
        output += 130;
    }
    output[0] = values[0];
    output[1] = ((count - 1) << 20) | command | 0x000f0000;
    __aeabi_memcpy4(output + 2, values + 1, (count - 1) * sizeof(u32));
    output += count + 1;
    if ((count & 1) == 0) {
        *output++ = 0xead0fead;
    }
    return output;
}
}
