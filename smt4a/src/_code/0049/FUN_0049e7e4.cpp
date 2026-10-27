/* NON_MATCHING: scissor helpers address the stack through ctx+0x120 (one shared base register); the draw-offset order now matches. */
#include "shard/S1ListPanel.h"
#include "shard/TextureDrawCall.h"
#include "gfx/StereoParallax.h"
#include "gfx/StereoParallax.h"
#include "AsdSDK/Source/Gfx/AsdTexManager/AsdTMTexTable.h"

extern "C" {

extern RenderCtxScissorA *g_renderCtx;

void efctSetSpeed(f32 speed);
void FUN_00168e00(s32 x, s32 y, s32 width, s32 height);
void renderPopStateStacks(void);
s32 objectApplyIfUnblocked(void *scrollBar);   /* total entries */
s32 uiSearchPrimary(void *scrollBar);   /* visible entries */
s32 resourceRunOperationIfUnblocked(void *scrollBar);   /* first visible entry */

/* Draw the panel's scroll bar: its track, and a thumb scaled to the visible share of the entries
 * (at least one pixel tall, resting on the bottom when the last entry is visible). */
void FUN_0049e7e4(ListPanel *panel, s32 x, s32 y, f32 speed)
{
    void *scrollBar = panel->scrollBar;
    s32 parallax = (s32)renderCtxCalculateStereoParallax(g_renderCtx, 0.25f);
    efctSetSpeed(speed);
    x += parallax;
    FUN_001835b4(2, 0x33, 7, x, y, 0xC9);
    FUN_001835b4(2, 0x33, 0x12, x, y, 0xC9);

    s32 thumbOffset = 0;
    TextureTableEntryIV *track = asdTMTexTableEntryAt(0x33, 0x13);
    s32 thumbHeight;

    if (objectApplyIfUnblocked(scrollBar) <= uiSearchPrimary(scrollBar)) {
        thumbHeight = track->placement->height;
    } else {
        f32 pixelsPerEntry = (f32)track->placement->height / (f32)objectApplyIfUnblocked(scrollBar);

        thumbHeight = (s32)((f32)uiSearchPrimary(scrollBar) * pixelsPerEntry);
        if (thumbHeight < 1) {
            thumbHeight = 1;
        }
        thumbOffset = (s32)((f32)resourceRunOperationIfUnblocked(scrollBar) * pixelsPerEntry);
        if (resourceRunOperationIfUnblocked(scrollBar) + uiSearchPrimary(scrollBar) == objectApplyIfUnblocked(scrollBar)
            && thumbOffset + thumbHeight < track->placement->height) {
            thumbOffset = track->placement->height - thumbHeight;
        }
    }

    bool suspended = renderCtxSuspendScissor(g_renderCtx);

    FUN_00168e00(track->x + x, track->y + y + thumbOffset, track->placement->width, thumbHeight);
    FUN_001835b4(2, 0x33, 0x13, x, y, 0xCE);
    if (suspended) {
        renderCtxResumeScissor(g_renderCtx);
    }
    renderPopStateStacks();
    efctSetSpeed(1.0f);
}

} /* extern "C" */
