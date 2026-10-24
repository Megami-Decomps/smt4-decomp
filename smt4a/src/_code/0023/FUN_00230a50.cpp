/* NON_MATCHING: instruction scheduling only (retail loads the unit table pointer before the stack/register moves) */
/* Computes the screen position of unit `index`: x is the unit's x plus the stereo parallax for `depth`, y the unit's y. */
#include "common.h"

extern "C" {
/* A unit record (0x8C bytes); its screen position is the vec2 at +0x44. */
struct UnitRecord {
    /* 0x00 */ u8 unk00[0x44];
    /* 0x44 */ u8 position[0x48];
};

struct UnitTable {
    /* 0x0 */ u8 unk0[4];
    /* 0x4 */ UnitRecord *units;
};

extern UnitTable g_gameGlobals;
extern void *g_renderCtx;
s32 vec2GetXInt(const void *vec);
s32 vec2GetYInt(const void *vec);
f32 renderCtxCalculateStereoParallax(void *context, f32 depth);

void FUN_00230a50(s32 *x, s32 *y, s32 index, f32 depth)
{
    UnitRecord *unit = &g_gameGlobals.units[index];

    *x = vec2GetXInt(unit->position) + (s32)renderCtxCalculateStereoParallax(g_renderCtx, depth);
    *y = vec2GetYInt(unit->position);
}
}
