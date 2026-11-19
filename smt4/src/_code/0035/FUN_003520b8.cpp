#include "common.h"

extern "C" {
s32 FUN_0035221c(u32 *out, u32 handle, s32 count, u8 mode, u32 a, u32 b, u32 c);

/* Forwards the complete service request (the twin of Apocalypse's FUN_004267dc). */
s32 FUN_003520b8(u32 *out, u32 handle, s32 count, u8 mode, u32 a, u32 b, u32 c)
{
    return FUN_0035221c(out, handle, count, mode, a, b, c);
}
}
