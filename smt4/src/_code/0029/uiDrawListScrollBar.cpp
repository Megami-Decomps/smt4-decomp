#include "camp/RenderCtx.h"
#include "camp/RenderCtxTitle.h"
#include "shard/TextureDrawCall.h"
#include "AsdSDK/Source/Gfx/AsdTexManager/AsdTMTexTable.h"

extern "C" {
s32 ifTouchGetSelectionModeForRegion(s32 id);
s32 FUN_0029e958(void *widget);
s32 FUN_0028cfbc(void *widget);
s32 resourceRunEmbeddedOperationIfUnblocked(void *widget);
s32 FUN_0029ee54(void *widget);
s32 FUN_0029d644(void *widget);
s32 resourceRunOperationIfUnblocked(void *widget);
void gxSetMirroredClippedScissor(s32 x, s32 y, s32 width, s32 height, s32 mode);

/* Re-query the controller after each callback, and refresh the render context for each state change.
 * Draws a frame with a scroll thumb: the three backing pieces, the thumb sized and placed from the widget's
   visible/total counts (vertical when `horizontal` is 0, horizontal otherwise) under a clip rectangle, then the
   cover piece. */
void uiDrawListScrollBar(void *widget, s32 x, s32 y, u32 group, u32 frameId, u32 trackId, u32 trackPressedId, u32 arrowAId,
                  u32 arrowAPressedId, u32 arrowBId, u32 arrowBPressedId, u32 thumbRegion, s32 arrowARegion,
                  u32 arrowBRegion, s32 layer, s32 horizontal)
{
    s32 arrowAPressed = 0;
    if (arrowARegion >= 0) {
        arrowAPressed = ifTouchGetSelectionModeForRegion((s16)arrowARegion);
    }
    s32 arrowBPressed = ifTouchGetSelectionModeForRegion((s16)arrowBRegion);
    s32 thumbPressed = ifTouchGetSelectionModeForRegion((s16)thumbRegion);
    texDrawTableEntryAtStoredOrigin(2, group, frameId, x, y, layer);
    u32 chosenArrowA = arrowAId;
    if (arrowAPressed != 0) chosenArrowA = arrowAPressedId;
    u32 chosenArrowB = arrowBId;
    if (arrowBPressed != 0) chosenArrowB = arrowBPressedId;
    texDrawTableEntryAtStoredOrigin(2, group, chosenArrowA, x, y, layer);
    texDrawTableEntryAtStoredOrigin(2, group, chosenArrowB, x, y, layer);
    s32 offset = 0;
    TextureTableEntryIV *record = asdTMTexTableEntryAt(group, trackId);

    if (horizontal != 0) {
        s32 total = FUN_0029e958(widget);
        s32 shown = FUN_0028cfbc(widget);
        s32 length;
        if (total <= shown) {
            length = record->placement->width;
        } else {
            f32 ratio = (f32)record->placement->width / (f32)FUN_0029e958(widget);
            length = (s32)((f32)FUN_0028cfbc(widget) * ratio);
            if (length < 1) {
                length = 1;
            }
            offset = (s32)((f32)resourceRunEmbeddedOperationIfUnblocked(widget) * ratio);
            if (resourceRunEmbeddedOperationIfUnblocked(widget) + FUN_0028cfbc(widget) == FUN_0029e958(widget) &&
                offset + length < record->placement->width) {
                offset = record->placement->width - length;
            }
        }
        renderStackSet(&g_titleScene->scissor, 3);
        gxSetMirroredClippedScissor(record->x + x + offset, record->y + y, length, record->placement->height, 1);
    } else {
        s32 total = FUN_0029ee54(widget);
        s32 shown = FUN_0029d644(widget);
        s32 length;
        if (total <= shown) {
            length = record->placement->height;
        } else {
            f32 ratio = (f32)record->placement->height / (f32)FUN_0029ee54(widget);
            length = (s32)((f32)FUN_0029d644(widget) * ratio);
            if (length < 1) {
                length = 1;
            }
            offset = (s32)((f32)resourceRunOperationIfUnblocked(widget) * ratio);
            if (resourceRunOperationIfUnblocked(widget) + FUN_0029d644(widget) == FUN_0029ee54(widget) &&
                offset + length < record->placement->height) {
                offset = record->placement->height - length;
            }
        }
        renderStackSet(&g_titleScene->scissor, 3);
        gxSetMirroredClippedScissor(record->x + x, y + offset + record->y, record->placement->width, length, 1);
    }
    u32 chosenTrackId = trackId;
    if (thumbPressed != 0) chosenTrackId = trackPressedId;
    texDrawTableEntryAtStoredOrigin(2, group, chosenTrackId, x, y, layer + 5);
    renderStackSet(&g_titleScene->scissor, 0);
}

} /* extern "C" */
