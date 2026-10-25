/* NON_MATCHING: flag setup (mov ip,#1; moveq ip,#0) now matches; retail ORs a<<4 into ip before masking d into r0, built masks d into r3 first. */
#include "common.h"

extern "C" {

/* Packs four fields into one word: bit 0 = (a != 1), a at bit 4, d at bit 8, b at bit 16, c at bit 24. */
u32 FUN_00310578(s32 a, s32 b, s32 c, u32 d)
{
    u32 packed = 1;
    if (a == 1)
        packed = 0;
    packed |= a << 4;
    packed |= (d & 0xFF) << 8;
    packed |= b << 16;
    packed |= c << 24;
    return packed;
}

} /* extern "C" */
