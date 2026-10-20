/* NON_MATCHING: register allocation only: retail builds (a != 1) with `mov ip, #1; moveq ip, #0` and reuses r0 for the masked d; built uses `movne` and r3. */
#include "common.h"

extern "C" {

/* Packs four fields into one word: bit 0 = (a != 1), a at bit 4, d at bit 8, b at bit 16, c at bit 24. */
u32 FUN_00310578(s32 a, s32 b, s32 c, u32 d)
{
    return (a != 1) | (a << 4) | ((d & 0xFF) << 8) | (b << 16) | (c << 24);
}

} /* extern "C" */
