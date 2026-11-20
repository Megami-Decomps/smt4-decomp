#include "gamedata/GameDataAccess.h"
#include "code/Code002a_Smt4a.h"
#include "code/Code002c_Smt4a.h"
#include "camp/RenderCtx.h"
#include "camp/RenderCtxA.h"
#include "shard/TextureDrawCall.h"
#include "AsdSDK/Source/Gfx/AsdTexManager/AsdTMTexTable.h"

extern "C" {
s32 widgetSubCallIfVisible(void *widget);
s32 uiSearchSecondary(void *widget);
s32 uiSearchPrimary(void *widget);
void gxSetMirroredClippedScissor(s32 x, s32 y, s32 width, s32 height, s32 mode);

/* Re-query the controller after each callback, and refresh the render context for each state change.
 * Draws a frame with a scroll thumb: the three backing pieces, the thumb sized and placed from the widget's
   visible/total counts (vertical when `horizontal` is 0, horizontal otherwise) under a clip rectangle, then the
   cover piece. */
void uiDrawListScrollBar(Object *widget, s32 x, s32 y, u32 group, u32 frameId, u32 trackId, u32 trackPressedId, u32 arrowAId,
                  u32 arrowAPressedId, u32 arrowBId, u32 arrowBPressedId, u32 thumbRegion, s32 arrowARegion,
                  u32 arrowBRegion, s32 layer, s32 horizontal)
{
    s32 arrowAPressed = 0;
    if (arrowARegion >= 0) {
        arrowAPressed = recordGetModeForId((s16)arrowARegion);
    }
    s32 arrowBPressed = recordGetModeForId((s16)arrowBRegion);
    s32 thumbPressed = recordGetModeForId((s16)thumbRegion);
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
        s32 total = widgetSubCallIfVisible(widget);
        s32 shown = uiSearchSecondary(widget);
        s32 length;
        if (total <= shown) {
            length = record->placement->width;
        } else {
            f32 ratio = (f32)record->placement->width / (f32)widgetSubCallIfVisible(widget);
            length = (s32)((f32)uiSearchSecondary(widget) * ratio);
            if (length < 1) {
                length = 1;
            }
            offset = (s32)((f32)resourceRunEmbeddedOperationIfUnblocked(widget) * ratio);
            if (resourceRunEmbeddedOperationIfUnblocked(widget) + uiSearchSecondary(widget) == widgetSubCallIfVisible(widget) &&
                offset + length < record->placement->width) {
                offset = record->placement->width - length;
            }
        }
        renderStackSet(&g_renderCtx->scissor, 3);
        gxSetMirroredClippedScissor(record->x + x + offset, record->y + y, length, record->placement->height, 1);
    } else {
        s32 total = gridNavigationGetItemCount(widget);
        s32 shown = uiSearchPrimary(widget);
        s32 length;
        if (total <= shown) {
            length = record->placement->height;
        } else {
            f32 ratio = (f32)record->placement->height / (f32)gridNavigationGetItemCount(widget);
            length = (s32)((f32)uiSearchPrimary(widget) * ratio);
            if (length < 1) {
                length = 1;
            }
            offset = (s32)((f32)resourceRunOperationIfUnblocked(widget) * ratio);
            if (resourceRunOperationIfUnblocked(widget) + uiSearchPrimary(widget) == gridNavigationGetItemCount(widget) &&
                offset + length < record->placement->height) {
                offset = record->placement->height - length;
            }
        }
        renderStackSet(&g_renderCtx->scissor, 3);
        gxSetMirroredClippedScissor(record->x + x, y + offset + record->y, record->placement->width, length, 1);
    }
    u32 chosenTrackId = trackId;
    if (thumbPressed != 0) chosenTrackId = trackPressedId;
    texDrawTableEntryAtStoredOrigin(2, group, chosenTrackId, x, y, layer + 5);
    renderStackSet(&g_renderCtx->scissor, 0);
}

} /* extern "C" */
