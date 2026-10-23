/* NON_MATCHING: header load expansion and compiler-generated copy-loop unrolling differ. */
#include "common.h"

// Expand Nintendo run-length blocks, clipping the final block to the advertised output size.
extern "C" void FUN_0014f2c8(const u8 *source, u8 *destination)
{
    u32 remaining = ((const __packed u32 *)source)[0] >> 8;
    source += sizeof(u32);
    if (remaining == 0) {
        remaining = ((const __packed u32 *)source)[0];
        source += sizeof(u32);
        if (remaining == 0)
            return;
    }
    do {
        u8 control = *source++;
        u32 count = control & 0x7F;
        if (control & 0x80) {
            count += 3;
            u8 value = *source++;
            if (count > remaining)
                count = remaining;
            remaining -= count;
            while (count-- != 0)
                *destination++ = value;
        } else {
            ++count;
            if (count > remaining)
                count = remaining;
            remaining -= count;
            while (count-- != 0)
                *destination++ = *source++;
        }
    } while (remaining != 0);
}
