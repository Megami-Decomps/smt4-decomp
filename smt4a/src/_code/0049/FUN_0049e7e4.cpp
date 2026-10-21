/* NON_MATCHING: register allocation and the scissor helpers' code shape */
#include "shard/S1ListPanel.h"

extern "C" {

extern RenderCtx *g_renderCtx;

void efctSetSpeed(f32 speed);
f32 FUN_001879d0(RenderCtx *ctx, f32 scale);
void FUN_001835b4(s32 layer, s32 group, s32 id, s32 x, s32 y, s32 z);
SpriteInfo *FUN_001834a4(s32 group, s32 id);
void FUN_00168e00(s32 x, s32 y, s32 width, s32 height);
void FUN_00168770(void);
s32 objectApplyIfUnblocked(void *scrollBar);   /* total entries */
s32 uiSearchPrimary(void *scrollBar);   /* visible entries */
s32 FUN_002a4860(void *scrollBar);   /* first visible entry */

/* Draw the panel's scroll bar: its track, and a thumb scaled to the visible share of the entries
 * (at least one pixel tall, resting on the bottom when the last entry is visible). */
void FUN_0049e7e4(ListPanel *panel, s32 x, s32 y, f32 speed)
{
    void *scrollBar = panel->scrollBar;

    x += (s32)FUN_001879d0(g_renderCtx, 0.25f);
    efctSetSpeed(speed);
    FUN_001835b4(2, 0x33, 7, x, y, 0xC9);
    FUN_001835b4(2, 0x33, 0x12, x, y, 0xC9);

    s32 thumbOffset = 0;
    SpriteInfo *track = FUN_001834a4(0x33, 0x13);
    s32 thumbHeight;

    if (uiSearchPrimary(scrollBar) >= objectApplyIfUnblocked(scrollBar)) {
        thumbHeight = track->size[1];
    } else {
        f32 pixelsPerEntry = (f32)track->size[1] / (f32)objectApplyIfUnblocked(scrollBar);

        thumbHeight = (s32)((f32)uiSearchPrimary(scrollBar) * pixelsPerEntry);
        if (thumbHeight < 1) {
            thumbHeight = 1;
        }
        thumbOffset = (s32)((f32)FUN_002a4860(scrollBar) * pixelsPerEntry);
        if (FUN_002a4860(scrollBar) + uiSearchPrimary(scrollBar) == objectApplyIfUnblocked(scrollBar)
            && thumbOffset + thumbHeight < track->size[1]) {
            thumbOffset = track->size[1] - thumbHeight;
        }
    }

    bool suspended = renderCtxSuspendScissor(g_renderCtx);

    FUN_00168e00(track->x + x, track->y + y + thumbOffset, track->size[0], thumbHeight);
    FUN_001835b4(2, 0x33, 0x13, x, y, 0xCE);
    if (suspended) {
        renderCtxResumeScissor(g_renderCtx);
    }
    FUN_00168770();
    efctSetSpeed(speed);
}

} /* extern "C" */
