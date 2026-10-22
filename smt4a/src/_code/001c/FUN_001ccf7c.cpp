/* NON_MATCHING: Packet cursor increments use different registers and the tail count encoding uses an immediate subtraction. */
#include "common.h"

extern "C" {
void rt_memcpy_w(void *destination, const void *source, u32 size);

/* Appends command packets of at most 128 values, padding each packet to an even word count. */
u32 *FUN_001ccf7c(u32 unused, u32 *commands, u32 header, const u32 *values, u32 count)
{
    for (;;) {
        *commands++ = *values++;
        if (count <= 128) {
            *commands++ = ((count - 1) << 20) | header | 0xF0000;
            rt_memcpy_w(commands, values, count * sizeof(u32) - sizeof(u32));
            commands += count - 1;
            if ((count & 1) == 0) {
                *commands++ = 0xEAD0FEAD;
            }
            return commands;
        }
        *commands++ = header | 0x07FF0000;
        rt_memcpy_w(commands, values, 127 * sizeof(u32));
        commands += 127;
        *commands++ = 0xEAD0FEAD;
        values += 127;
        count -= 128;
    }
}
}
