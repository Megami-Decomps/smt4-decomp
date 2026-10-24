/* NON_MATCHING: retail re-queries the widget's counts at each use (the total is fetched twice, the shown count twice) and keeps the clip stack address in r7/fp differently; the draw sequence, ratios and clip-stack settings are the same. */
#include "camp/RenderCtx.h"

namespace {
/* A layout record: position at +8/+10 and the size pair through the pointer at +0xc. */
struct LayoutRecord {
    /* 0x00 */ u8 unk00[8];
    /* 0x08 */ s16 x;
    /* 0x0a */ s16 y;
    /* 0x0c */ s16 *size;                /* [0]: width, [1]: height */
};
}

extern "C" {
extern RenderCtxA *g_renderCtx;
s32 recordGetModeForId(s32 id);
void FUN_001835b4(u32 layer, u32 group, u32 id, s32 x, s32 y, u32 slot);
LayoutRecord *FUN_001834a4(u32 group, u32 id);
s32 widgetSubCallIfVisible(void *widget);
s32 uiSearchSecondary(void *widget);
s32 resourceRunEmbeddedOperationIfUnblocked(void *widget);
s32 objectApplyIfUnblocked(void *widget);
s32 uiSearchPrimary(void *widget);
s32 resourceRunOperationIfUnblocked(void *widget);
void FUN_0035ae58(s32 x, s32 y, s32 width, s32 height, s32 mode);

/* Draws a frame with a scroll thumb: the three backing pieces, the thumb sized and placed from the widget's
   visible/total counts (vertical when `vertical` is 0, horizontal otherwise) under a clip rectangle, then the
   cover piece. */
void FUN_00344cd0(void *widget, s32 x, s32 y, u32 group, u32 backId, u32 thumbId, u32 coverId, u32 sideIdA,
                  u32 sideIdB, u32 cornerIdA, u32 cornerIdB, u32 modeSource12, s32 modeSource13,
                  u32 modeSource14, s32 depth, s32 vertical)
{
    s32 modeA = 0;
    if (modeSource13 >= 0) {
        modeA = recordGetModeForId((s16)modeSource13);
    }
    s32 modeB = recordGetModeForId((s16)modeSource14);
    s32 modeC = recordGetModeForId((s16)modeSource12);
    FUN_001835b4(2, group, backId, x, y, depth);
    u32 sideId = modeA != 0 ? sideIdB : sideIdA;
    u32 cornerId = modeB != 0 ? cornerIdB : cornerIdA;
    FUN_001835b4(2, group, sideId, x, y, depth);
    FUN_001835b4(2, group, cornerId, x, y, depth);
    s32 offset = 0;
    LayoutRecord *record = FUN_001834a4(group, thumbId);
    RenderStateStack *clipStack = reinterpret_cast<RenderStateStack *>(reinterpret_cast<u8 *>(g_renderCtx) + 0x1318);
    if (vertical != 0) {
        s32 total = widgetSubCallIfVisible(widget);
        s32 shown = uiSearchSecondary(widget);
        s32 length;
        if (shown >= total) {
            length = record->size[0];
        } else {
            f32 ratio = (f32)record->size[0] / (f32)total;
            length = (s32)((f32)shown * ratio);
            if (length < 1) {
                length = 1;
            }
            offset = (s32)((f32)resourceRunEmbeddedOperationIfUnblocked(widget) * ratio);
            if (resourceRunEmbeddedOperationIfUnblocked(widget) + uiSearchSecondary(widget) == widgetSubCallIfVisible(widget) &&
                offset + length < record->size[0]) {
                offset = record->size[0] - length;
            }
        }
        renderStackSet(clipStack, 3);
        FUN_0035ae58(record->x + x + offset, record->y + y, length, record->size[1], 1);
    } else {
        s32 total = objectApplyIfUnblocked(widget);
        s32 shown = uiSearchPrimary(widget);
        s32 length;
        if (shown >= total) {
            length = record->size[1];
        } else {
            f32 ratio = (f32)record->size[1] / (f32)total;
            length = (s32)((f32)shown * ratio);
            if (length < 1) {
                length = 1;
            }
            offset = (s32)((f32)resourceRunOperationIfUnblocked(widget) * ratio);
            if (resourceRunOperationIfUnblocked(widget) + uiSearchPrimary(widget) == objectApplyIfUnblocked(widget) &&
                offset + length < record->size[1]) {
                offset = record->size[1] - length;
            }
        }
        renderStackSet(clipStack, 3);
        FUN_0035ae58(record->x + x, y + offset + record->y, record->size[0], length, 1);
    }
    if (modeC != 0) {
        thumbId = coverId;
    }
    FUN_001835b4(2, group, thumbId, x, y, depth + 5);
    renderStackSet(clipStack, 0);
}

} /* extern "C" */
