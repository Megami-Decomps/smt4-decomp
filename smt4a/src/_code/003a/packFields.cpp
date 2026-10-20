#include "shard/Shard003A.h"

extern "C" {

/* Packs six fields into one word: a at bit 16, b at 20, c at 24, d at 28, f at 8 and e in the low bits. */
u32 packFields(s32 a, s32 b, s32 c, s32 d, u32 e, s32 f)
{
    return e | (f << 8) | (a << 0x10) | (b << 0x14) | (c << 0x18) | (d << 0x1C);
}

} /* extern "C" */
