/* NON_MATCHING: same loads and ALU ops as retail; retail keeps the size in r0 (copying the source pointer to r1 first), armcc keeps it in r1. */
#include "common.h"

static __inline u32 readLzWord(const u8 *source)
{
    return (u32)source[0] | ((u32)source[1] << 8) |
           ((u32)source[2] << 16) | ((u32)source[3] << 24);
}

extern "C" {

/* Returns the advertised output size of a compressed block: the 24-bit size in the first word, or the full word that follows when that is zero. */
u32 FUN_001aeecc(const u8 *source)
{
    u32 size = readLzWord(source) >> 8;
    if (size != 0) {
        return size;
    }
    return readLzWord(source + 4);
}

} /* extern "C" */
