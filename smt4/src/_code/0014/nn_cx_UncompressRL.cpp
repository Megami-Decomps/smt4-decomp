/* NON_MATCHING: the copy loops now match retail (do-while, the literal branch first); remaining: the header read
 * swaps r2/r3 (retail loads the word into r2 and the top byte into r3). */
#include "common.h"

static __inline u32 readLzWord(const u8 *source)
{
    return (u32)source[0] | ((u32)source[1] << 8) |
           ((u32)source[2] << 16) | ((u32)source[3] << 24);
}

// Expand Nintendo run-length blocks, clipping the final block to the advertised output size.
extern "C" void nn_cx_UncompressRL(const u8 *source, u8 *destination)
{
    u32 remaining = readLzWord(source) >> 8;
    source += sizeof(u32);
    if (remaining == 0) {
        remaining = readLzWord(source);
        source += sizeof(u32);
        if (remaining == 0)
            return;
    }
    do {
        u8 control = *source++;
        u32 count;
        if ((control & 0x80) == 0) {
            count = (control & 0x7F) + 1;
            if (count > remaining)
                count = remaining;
            remaining -= count;
            do {
                *destination++ = *source++;
            } while (--count > 0);
        } else {
            count = (control & 0x7F) + 3;
            u8 value = *source++;
            if (count > remaining)
                count = remaining;
            remaining -= count;
            do {
                *destination++ = value;
            } while (--count > 0);
        }
    } while (remaining != 0);
}
