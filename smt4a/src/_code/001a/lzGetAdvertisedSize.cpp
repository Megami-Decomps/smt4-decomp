#include "common.h"

extern "C" {

/* Returns the advertised output size of a compressed block: the 24-bit size in the first word, or the full word that follows when that is zero. */
u32 lzGetAdvertisedSize(const u8 *source)
{
    u32 word = (*(const u32 *)source & 0x00FFFFFF) | ((u32)source[3] << 24);
    u32 size = word >> 8;
    if (size == 0) {
        word = (*(const u32 *)(source + 4) & 0x00FFFFFF) | ((u32)source[7] << 24);
        size = word;
    }
    return size;
}

} /* extern "C" */
