/* NON_MATCHING: retail's kind-to-row switches are jump tables starting at 0 (built subtracts the first case) and the colour interpolation is scheduled differently (211 vs 229 rows); the gradient colour lookup is the same. */
#include "common.h"

extern "C" {

/* One gradient row (9 bytes): three RGB stops. */
typedef struct GradientRow {
    u8 stop[3][3];
} GradientRow;

extern GradientRow DAT_0057f138[];

/* The colour channel from `from` to `to` at `step` of `divisor` (12-bit fixed point). */
static __inline s32 channel7(s32 from, s32 to, s32 step)
{
    return (s16)from + (s16)((((to - from) * 0x1000) / 7 * step) >> 12);
}

static __inline s32 channel9(s32 from, s32 to, s32 step)
{
    return (s16)from + (s16)((((to - from) * 0x1000) / 9 * step) >> 12);
}

/* The gradient colour (RGBA, alpha 0xFF) for colour kind `kind` at `level`: kinds map to rows of a
 * three-stop table, 7 levels per stop (9 for the special kind 0xFF). */
s32 FUN_003a6404(s32 kind, s32 level)
{
    s32 row = 0;

    if (kind == 12) {
        row = 11;
    } else if (kind < 12) {
        switch (kind) {
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
        }
    } else if (kind == 18) {
        row = 0x16;
    } else if (kind < 18) {
        switch (kind) {
        case 13: row = 12; break;
        case 14: row = 13; break;
        case 15: row = 14; break;
        case 16: row = 0x14; break;
        case 17: row = 0x15; break;
        }
    } else if (kind == 21) {
        row = 0x11;
    } else if (kind < 21) {
        if (kind == 19) {
            row = 15;
        } else if (kind == 20) {
            row = 0x10;
        }
    } else if (kind == 22) {
        row = 0x13;
    } else if (kind == 0xFF) {
        row = 0x12;
    }
    const u8 *bytes = (const u8 *)&DAT_0057f138[row];
    s32 r0 = 0, g0 = 0, b0 = 0, r1 = 0, g1 = 0, b1 = 0;
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
        }
        s32 step = level % 7;

        red = channel7(r0, r1, step);
        green = channel7(g0, g1, step);
        blue = channel7(b0, b1, step);
    } else {
        if (level < 9) {
            r0 = bytes[0]; g0 = bytes[1]; b0 = bytes[2];
            r1 = bytes[3]; g1 = bytes[4]; b1 = bytes[5];
        } else if (level < 14) {
            r0 = bytes[3]; g0 = bytes[4]; b0 = bytes[5];
        }
        s32 step = level % 9;

        red = channel9(r0, r1, step);
        green = channel9(g0, g1, step);
        blue = channel9(b0, b1, step);
    }
    return red * 0x1000000 + green * 0x10000 + blue * 0x100 + 0xFF;
}

}
