/* NON_MATCHING: retail duplicates the modulo/index/draw tail in both pulse arms and divides by a loaded 5.0 (vdiv); ours merges the arms and folds the division to a multiply by 0.2 (133 rows against 151). */
#include "camp/RenderCtx.h"
#include "shard/FUN_004ab718.h"

/* A battle UI icon strip (observed fields). */
struct BtlIconStrip {
    /* 0x00 */ s32 handle[14];
    /* 0x38 */ s32 count;
    /* 0x3C */ s32 selection;
    /* 0x40 */ f32 pulse;
    /* 0x44 */ u8 frozen;
    /* 0x45 */ u8 unk45[0x7];
    /* 0x4C */ u32 id[14];
    /* 0x84 */ s32 phase;
};

struct Vector2 {
    f32 x;
    f32 y;
};

extern "C" {

extern void *g_btlUiBlock;
extern RenderCtxA *g_renderCtx;

void efctSetSpeed(f32 speed);
f32 renderCtxCalculateStereoParallax(RenderCtxA *context, f32 depth);
s32 FUN_001692ac(u32 kind, bool enabled);
void FUN_003c5de0(f32 scale, s32 handle, u32 id, s32 x, s32 y, s32 priority);

/* Draws the selected icon of the strip at `position`, shifted by the stereo parallax and a phase wobble,
 * with the pulse scaling it while the strip is not frozen. */
void FUN_0041a834(BtlIconStrip *strip, Vector2 *position, f32 scale)
{
    if (strip->count == 0 || g_btlUiBlock == NULL || FUN_004ab718() != 0) {
        return;
    }
    renderCtxPushA(g_renderCtx, FUN_001692ac(1, false));
    efctSetSpeed(scale);
    {
        f32 x = position->x;
        f32 y = position->y;
        s32 parallax = (s32)renderCtxCalculateStereoParallax(g_renderCtx, 0.29f);
        s32 visible = strip->count > 1 ? 1 : strip->count;
        s32 shift = (s32)((f32)visible * 12.0f * 0.5f);
        f32 wobble;
        s32 wobbleOffset;
        s32 index;
        f32 drawScale;

        f32 phaseF = (f32)strip->phase;

        wobble = strip->phase > 15 ? 3.0f - (phaseF - 15.0f) * 0.2f : phaseF * 0.2f;
        wobbleOffset = (s32)wobble;
        if (strip->frozen == 0 && strip->count > 1) {
            index = strip->selection % strip->count;
            efctSetSpeed(scale - scale / 5.0f * strip->pulse);
            drawScale = 1.0f + 0.2f * strip->pulse;
        } else {
            index = strip->selection % strip->count;
            drawScale = 1.0f;
        }
        FUN_003c5de0(drawScale, (s16)strip->handle[index], strip->id[index],
                     (s32)(((x - 1.0f * 12.0f) + (f32)shift) + (f32)parallax),
                     (s32)((y - 12.0f) + (f32)wobbleOffset), 0x49);
    }
    efctSetSpeed(1.0f);
    renderStackPop(&g_renderCtx->stackA);
}

} /* extern "C" */
