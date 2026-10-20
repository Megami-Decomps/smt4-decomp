#include "shard/Shard003B.h"

extern "C" {

/* Packs three fields: `a` in the low bits, `b` from bit 4 and `c` from bit 8. */
u32 packThreeFields(u32 a, s32 b, s32 c)
{
    return a | (b << 4) | (c << 8);
}

} /* extern "C" */
