/* NON_MATCHING: stores, memcpy argument forms and value pointer now match retail; remaining difference is register allocation (retail keeps header in r6, count in r5, the next-pointer copy in r4) and the first store keeping r1 unincremented. */
#include "common.h"

extern "C" {
void __aeabi_memcpy4(void *destination, const void *source, u32 size);

/* Appends command packets of at most 128 values, padding each packet to an even word count. */
u32 *FUN_001ccf7c(u32 unused, u32 *commands, u32 header, const u32 *values, u32 count)
{
    for (;;) {
        if (count <= 128) {
            commands[0] = values[0];
            commands++;
            *commands++ = (count << 20) + 0xFFF00000u | header | 0xF0000;
            u32 bytes = count * sizeof(u32);
            __aeabi_memcpy4(commands, values + 1, bytes - sizeof(u32));
            commands += count - 1;
            if ((count & 1) == 0) {
                *commands++ = 0xEAD0FEAD;
            }
            return commands;
        }
        commands[0] = values[0];
        commands[1] = header | 0x07FF0000;
        commands += 2;
        const u32 *rest = values + 1;
        __aeabi_memcpy4(commands, rest, 127 * sizeof(u32));
        commands += 127;
        *commands++ = 0xEAD0FEAD;
        values = rest + 127;
        count -= 128;
    }
}
}
