#include "gfx/StereoParallax.h"
#include "camp/RenderCtxA.h"
#include "camp/RenderCtx.h"
#include "shard/S1ListPanel.h"
#include "shard/TextureDrawCall.h"
#include "AsdSDK/Source/Gfx/AsdTexManager/AsdTMTexTable.h"

extern "C" {
void efctSetSpeed(f32 speed);
s32 gridNavigationGetItemCount(void *view);
s32 uiSearchPrimary(void *view);
s32 resourceRunOperationIfUnblocked(void *view);
void FUN_00168e00(s32 x, s32 y, s32 width, s32 height);
u32 renderPopStateStacks(void);

/* Draws a list's scroll bar: the frame, then a thumb sized and placed by the visible fraction of
 * the list. */
void FUN_003f61b4(u8 *list, s32 x, s32 y, f32 speed)
{
    void *view = list + 0xBC;
    s32 parallax = (s32)renderCtxCalculateStereoParallax(g_renderCtx, 0.26f);
    efctSetSpeed(speed);
    x += parallax;
    texDrawTableEntryAtStoredOrigin(2, 0x31, 0x74, x, y, 0xC9);
    texDrawTableEntryAtStoredOrigin(2, 0x31, 0x73, x, y, 0xC9);

    s32 thumbOffset = 0;
    TextureTableEntryIV *frame = asdTMTexTableEntryAt(0x31, 0x75);
    s32 thumbHeight;
    if (gridNavigationGetItemCount(view) > uiSearchPrimary(view)) {
        f32 ratio = (f32)frame->placement->height / (f32)gridNavigationGetItemCount(view);
        thumbHeight = (s32)((f32)uiSearchPrimary(view) * ratio);
        if (thumbHeight < 1)
            thumbHeight = 1;
        thumbOffset = (s32)((f32)resourceRunOperationIfUnblocked(view) * ratio);
        if (resourceRunOperationIfUnblocked(view) + uiSearchPrimary(view) == gridNavigationGetItemCount(view)
            && thumbOffset + thumbHeight < frame->placement->height)
            thumbOffset = frame->placement->height - thumbHeight;
    } else {
        thumbHeight = frame->placement->height;
    }

    bool restore = renderCtxSuspendScissor(g_renderCtx);
    FUN_00168e00(frame->x + x, frame->y + y + thumbOffset, frame->placement->width, thumbHeight);
    texDrawTableEntryAtStoredOrigin(2, 0x31, 0x75, x, y, 0xCE);
    if (restore)
        renderCtxResumeScissor(g_renderCtx);
    renderPopStateStacks();
    efctSetSpeed(1.0f);
}

} /* extern "C" */
