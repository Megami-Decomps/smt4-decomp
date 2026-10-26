/* NON_MATCHING: only the 0x111-length arm schedules differently (retail shifts the high nibble before loading the two extension bytes; the build loads the first byte first). */
#include "common.h"

static __inline u32 readLzWord(const u8 *source)
{
    return (u32)source[0] | ((u32)source[1] << 8) |
           ((u32)source[2] << 16) | ((u32)source[3] << 24);
}

extern "C" void lzDecompressBytes(const u8 *source, u8 *destination)
{
    u32 remaining = readLzWord(source) >> 8;
    bool extended = (*source & 15) != 0;
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
            if ((flags & 0x80) == 0) {
                *destination++ = *source++;
                --remaining;
            } else {
                u32 first = *source;
                u32 length = first >> 4;
                if (!extended) {
                    length += 3;
                } else if (length == 1) {
                    length = ((first & 15) << 12) | (source[1] << 4) | (source[2] >> 4);
                    source += 2;
                    length += 0x111;
                } else if (length == 0) {
                    length = ((first & 15) << 4) | (*++source >> 4);
                    length += 0x11;
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
                    *destination++ = *reference++;
                }
            }
            if (remaining == 0) {
                return;
            }
        }
    }
}
