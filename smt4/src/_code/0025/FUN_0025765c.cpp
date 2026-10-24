/* NON_MATCHING: readable rewrite compiles (215 vs 184 rows); retail is a leaf with the divisions by 7 and 9 expanded inline and a different row-selection switch layout */
#include "common.h"

// Three RGB colours of one element's gauge ramp.
struct ColorRamp {
    u8 color[3][3];
};

extern "C" {

extern ColorRamp g_colorRampTable[20];

// Linear blend of one channel over `length` steps, in 12-bit fixed point.
static s16 blendChannel(s32 from, s32 to, s32 step, s32 length)
{
    return (s16)from + (s16)((((to - from) * 0x1000) / length * step) >> 12);
}

// Colour of the gauge for element `element` at animation phase `phase`, as 0xRRGGBBFF.
s32 FUN_0025765c(s32 element, u32 phase)
{
    s32 row = 0;
    switch (element) {
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

    const ColorRamp* ramp = &g_colorRampTable[row];
    s32 from[3] = { 0, 0, 0 };
    s32 to[3] = { 0, 0, 0 };
    s16 r, g, b;
    if (element != 0xff) {
        if ((s32)phase < 7) {
            for (s32 i = 0; i < 3; i++) {
                from[i] = ramp->color[0][i];
                to[i] = ramp->color[1][i];
            }
        } else if ((s32)phase < 0xe) {
            for (s32 i = 0; i < 3; i++) {
                from[i] = ramp->color[1][i];
                to[i] = ramp->color[2][i];
            }
        } else {
            for (s32 i = 0; i < 3; i++) from[i] = ramp->color[2][i];
        }
        s32 step = phase % 7;
        r = blendChannel(from[0], to[0], step, 7);
        g = blendChannel(from[1], to[1], step, 7);
        b = blendChannel(from[2], to[2], step, 7);
    } else {
        if ((s32)phase < 9) {
            for (s32 i = 0; i < 3; i++) {
                from[i] = ramp->color[0][i];
                to[i] = ramp->color[1][i];
            }
        } else if ((s32)phase < 0xe) {
            for (s32 i = 0; i < 3; i++) from[i] = ramp->color[1][i];
        }
        s32 step = (s32)phase % 9;
        r = blendChannel(from[0], to[0], step, 9);
        g = blendChannel(from[1], to[1], step, 9);
        b = blendChannel(from[2], to[2], step, 9);
    }
    return r * 0x1000000 + g * 0x10000 + b * 0x100 + 0xff;
}

} /* extern "C" */
