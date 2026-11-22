/* NON_MATCHING: 145 lines: the kind-to-row mapping is one switch (armcc's decision tree and jump tables as retail) and
 * the stops are read per arm as retail does. What remains: retail forms the row's address inside each arm (the build
 * hoists it), adds each channel's step before narrowing (the build narrows the step and adds with sxtah) and keeps
 * the 7-level path's operands in other registers. */
#include "common.h"

extern "C" {

/* One gradient row (9 bytes): three RGB stops. */
typedef struct GradientRow {
    u8 stop[3][3];
} GradientRow;

extern GradientRow DAT_0057f138[];

/* The colour channel from `from` to `to` at `level` (7 levels per stop; 9 for channel9), in 12-bit fixed point. */
static __inline s32 channel7(s32 from, s32 to, s32 level)
{
    return (s16)from + (s16)((((to - from) * 0x1000) / 7 * (level % 7)) >> 12);
}

static __inline s32 channel9(s32 from, s32 to, s32 level)
{
    return (s16)from + (s16)((((to - from) * 0x1000) / 9 * (level % 9)) >> 12);
}

/* The gradient colour (RGBA, alpha 0xFF) for colour kind `kind` at `level`: kinds map to rows of a
 * three-stop table, 7 levels per stop (9 for the special kind 0xFF). */
s32 FUN_003a6404(s32 kind, s32 level)
{
    s32 row = 0;

    switch (kind) {
    case 0: case 1: break;
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
    case 16: row = 0x14; break;
    case 17: row = 0x15; break;
    case 18: row = 0x16; break;
    case 19: row = 15; break;
    case 20: row = 0x10; break;
    case 21: row = 0x11; break;
    case 22: row = 0x13; break;
    case 0xFF: row = 0x12; break;
    }
    const u8 *bytes = (const u8 *)&DAT_0057f138[row];
    s32 r0 = 0, g0 = 0, b0 = 0;
    s32 r1, g1, b1;
    s16 red;
    s16 green;
    s16 blue;

    if (kind != 0xFF) {
        if (level < 7) {
            r0 = bytes[0]; g0 = bytes[1]; b0 = bytes[2];
            r1 = bytes[3]; g1 = bytes[4]; b1 = bytes[5];
        } else if (level < 14) {
            r0 = bytes[3]; g0 = bytes[4]; b0 = bytes[5];
            r1 = bytes[6]; g1 = bytes[7]; b1 = bytes[8];
        } else {
            r0 = bytes[6]; g0 = bytes[7]; b0 = bytes[8];
            r1 = 0; g1 = 0; b1 = 0;
        }
        red = channel7(r0, r1, level);
        green = channel7(g0, g1, level);
        blue = channel7(b0, b1, level);
    } else {
        if (level < 9) {
            r0 = bytes[0]; g0 = bytes[1]; b0 = bytes[2];
            r1 = bytes[3]; g1 = bytes[4]; b1 = bytes[5];
        } else if (level < 14) {
            r0 = bytes[3]; g0 = bytes[4]; b0 = bytes[5];
            r1 = 0; g1 = 0; b1 = 0;
        } else {
            r1 = 0; g1 = 0; b1 = 0;
        }
        red = channel9(r0, r1, level);
        green = channel9(g0, g1, level);
        blue = channel9(b0, b1, level);
    }
    return red * 0x1000000 + green * 0x10000 + blue * 0x100 + 0xFF;
}

}
