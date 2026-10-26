/* NON_MATCHING: header-load scheduling and extended-length/literal cold-block placement differ; candidate -O2. */
#include "common.h"

static __inline u32 readLzWord(const u8 *source)
{
    return (u32)source[0] | ((u32)source[1] << 8) |
           ((u32)source[2] << 16) | ((u32)source[3] << 24);
}

extern "C" void lzDecompressBytes(const u8 *source, u8 *destination)
{
    bool extended = (*source & 15) != 0;
    u32 remaining = readLzWord(source) >> 8;
    source += 4;
    if (remaining == 0) {
        remaining = readLzWord(source);
        source += 4;
        if (remaining == 0) {
            return;
        }
    }
    for (;;) {
        u32 flags = *source++;
        for (s32 bit = 0; bit < 8; ++bit, flags <<= 1) {
            if (!(flags & 0x80)) {
                *destination++ = *source++;
                --remaining;
            } else {
                u32 first = *source;
                u32 length = first >> 4;
                if (!extended) {
                    length += 3;
                } else if (length == 1) {
                    length = ((first & 15) << 12) | (source[1] << 4) | (source[2] >> 4);
                    length += 0x111;
                    source += 2;
                } else if (length == 0) {
                    length = ((first & 15) << 4) | (source[1] >> 4);
                    length += 0x11;
                    ++source;
                } else {
                    ++length;
                }
                u32 distance = (*source++ & 15) << 8;
                distance |= *source++;
                ++distance;
                if (length > remaining) {
                    length = remaining;
                }
                remaining -= length;
                const u8 *reference = destination - distance;
                for (u32 index = 0; index < length; ++index) {
                    destination[index] = reference[index];
                }
                destination += length;
            }
            if (remaining == 0) {
                return;
            }
        }
    }
}
