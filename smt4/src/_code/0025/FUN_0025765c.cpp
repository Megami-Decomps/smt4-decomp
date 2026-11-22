/* NON_MATCHING: the row switch and the inline divisions (`phase % length` recomputed per channel) now match retail's shape; retail
 * recomputes the row's table address in every branch and keeps the six channel values in r0/r6-r9/ip (eight saved registers). */
#include "common.h"
#include "code/Code0025_Smt4.h"

/* Three RGB colours of one element's gauge ramp. */
struct ColorRamp {
    u8 color[3][3];
};

extern "C" {

extern ColorRamp g_colorRampTable[20];

/* Linear blend of one channel from `from` to `to` at step `phase % length`, in 12-bit fixed point. */
static __inline s16 blendChannel(s32 from, s32 to, s32 phase, s32 length)
{
    return (s16)(from + ((to - from) * 0x1000 / length * (phase % length) >> 12));
}

/* Colour of the gauge for element `element` at animation phase `phase`, as 0xRRGGBBFF. */
s32 FUN_0025765c(s32 element, s32 phase)
{
    s32 row = 0;
    switch (element) {
    case 0: row = 0; break;
    case 2: row = 1; break;
    case 3: row = 2; break;
    case 4: row = 3; break;
    case 5: row = 4; break;
    case 6: row = 5; break;
    case 7: row = 6; break;
    case 8: row = 7; break;
    case 9: row = 8; break;
    case 10: row = 9; break;
    case 11: row = 10; break;
    case 12: row = 11; break;
    case 13: row = 12; break;
    case 14: row = 13; break;
    case 15: row = 14; break;
    case 19: row = 15; break;
    case 20: row = 16; break;
    case 21: row = 17; break;
    case 22: row = 19; break;
    case 255: row = 18; break;
    }

    const ColorRamp *ramp = &g_colorRampTable[row];
    s32 from[3];
    s32 to[3];
    s16 r, g, b;
    if (element != 0xff) {
        if (phase < 7) {
            for (s32 i = 0; i < 3; i++) from[i] = ramp->color[0][i];
            for (s32 i = 0; i < 3; i++) to[i] = ramp->color[1][i];
        } else if (phase < 14) {
            for (s32 i = 0; i < 3; i++) from[i] = ramp->color[1][i];
            for (s32 i = 0; i < 3; i++) to[i] = ramp->color[2][i];
        } else {
            for (s32 i = 0; i < 3; i++) from[i] = ramp->color[2][i];
            for (s32 i = 0; i < 3; i++) to[i] = 0;
        }
        r = blendChannel(from[0], to[0], phase, 7);
        g = blendChannel(from[1], to[1], phase, 7);
        b = blendChannel(from[2], to[2], phase, 7);
    } else {
        if (phase < 9) {
            for (s32 i = 0; i < 3; i++) from[i] = ramp->color[0][i];
            for (s32 i = 0; i < 3; i++) to[i] = ramp->color[1][i];
        } else if (phase < 14) {
            for (s32 i = 0; i < 3; i++) from[i] = ramp->color[1][i];
            for (s32 i = 0; i < 3; i++) to[i] = 0;
        } else {
            for (s32 i = 0; i < 3; i++) from[i] = 0;
            for (s32 i = 0; i < 3; i++) to[i] = 0;
        }
        r = blendChannel(from[0], to[0], phase, 9);
        g = blendChannel(from[1], to[1], phase, 9);
        b = blendChannel(from[2], to[2], phase, 9);
    }
    return r * 0x1000000 + g * 0x10000 + b * 0x100 + 0xff;
}

} /* extern "C" */
