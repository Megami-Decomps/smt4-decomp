/* NON_MATCHING: draws a list scroll bar (frame, the two arrow buttons with their pressed variants, then the proportional thumb clipped by the scissor state); written from the decompilation, the ratio/offset math is shared between the horizontal and vertical case through one helper and the integer-to-float conversions are written as casts */
#include "shard/S1ListPanel.h"

#define SCROLL_LAYER 2
#define SCROLL_LAYER_THUMB_OFFSET 5
#define SCROLL_SCISSOR_ON 3
#define SCROLL_SCISSOR_OFF 0

struct ScrollRange {
    /* 0x00 */ s16 length;       /* extent along the bar when horizontal */
    /* 0x02 */ s16 thickness;
};

struct ScrollTrack {
    /* 0x00 */ u8 unk00[8];
    /* 0x08 */ s16 x;
    /* 0x0A */ s16 y;
    /* 0x0C */ ScrollRange *range;
};

struct ScrollScissorView {
    u8 prefix[0x130C];
    RenderStateStack state;
};

extern "C" {
extern ScrollScissorView *g_titleScene;

s32 ifTouchGetSelectionModeForRegion(s32 region);
void FUN_002bf288(s32 layer, u32 group, u32 id, s32 x, s32 y, s32 size);
ScrollTrack *FUN_002bf4f8(u32 group, u32 id);
s32 FUN_0029e958(void *list);   /* horizontal: total entries */
s32 FUN_0028cfbc(void *list);   /* horizontal: visible entries */
s32 FUN_0029e93c(void *list);   /* horizontal: first visible entry */
s32 FUN_0029ee54(void *list);   /* vertical: total entries */
s32 FUN_0029d644(void *list);   /* vertical: visible entries */
s32 FUN_0029efc0(void *list);   /* vertical: first visible entry */
void FUN_0029a17c(s32 x, s32 y, s32 width, s32 height, s32 flag);

/* Proportional thumb: its length for `visible` of `total` entries in a bar `full` long, and its offset for entry `first`. */
static __inline s32 scrollThumb(s32 visible, s32 total, s32 full, s32 first, s32 *offset)
{
    *offset = 0;
    if (visible >= total)
        return full;
    f32 ratio = (f32)full / (f32)total;
    s32 length = (s32)((f32)visible * ratio);
    if (length < 1)
        length = 1;
    *offset = (s32)((f32)first * ratio);
    if (first + visible == total && *offset + length < full)
        *offset = full - length;
    return length;
}

void FUN_00290994(void *list, s32 x, s32 y, u32 group, u32 frameId, u32 trackId, u32 trackPressedId,
                  s32 arrowAId, s32 arrowAPressedId, u32 arrowBId, u32 arrowBPressedId,
                  u32 thumbRegion, s32 arrowARegion, u32 arrowBRegion, s32 layer, s32 horizontal)
{
    s32 arrowAPressed = 0;
    if (arrowARegion >= 0)
        arrowAPressed = ifTouchGetSelectionModeForRegion((s16)arrowARegion);
    s32 arrowBPressed = ifTouchGetSelectionModeForRegion((s16)arrowBRegion);
    s32 thumbPressed = ifTouchGetSelectionModeForRegion((s16)thumbRegion);

    FUN_002bf288(SCROLL_LAYER, group, frameId, x, y, layer);
    FUN_002bf288(SCROLL_LAYER, group, arrowAPressed != 0 ? arrowAPressedId : arrowAId, x, y, layer);
    FUN_002bf288(SCROLL_LAYER, group, arrowBPressed != 0 ? arrowBPressedId : arrowBId, x, y, layer);

    ScrollTrack *track = FUN_002bf4f8(group, trackId);
    s32 offset = 0;
    s32 left, top, width, height;
    if (horizontal != 0) {
        width = scrollThumb(FUN_0028cfbc(list), FUN_0029e958(list), track->range->length, FUN_0029e93c(list), &offset);
        renderStackSet(&g_titleScene->state, SCROLL_SCISSOR_ON);
        left = track->x + x + offset;
        top = track->y + y;
        height = track->range->thickness;
    } else {
        height = scrollThumb(FUN_0029d644(list), FUN_0029ee54(list), track->range->thickness, FUN_0029efc0(list), &offset);
        renderStackSet(&g_titleScene->state, SCROLL_SCISSOR_ON);
        left = track->x + x;
        top = y + offset + track->y;
        width = track->range->length;
    }
    FUN_0029a17c(left, top, width, height, 1);

    FUN_002bf288(SCROLL_LAYER, group, thumbPressed != 0 ? trackPressedId : trackId, x, y, layer + SCROLL_LAYER_THUMB_OFFSET);
    renderStackSet(&g_titleScene->state, SCROLL_SCISSOR_OFF);
}

} /* extern "C" */
