#include "shard/W9_W9Match8_WorkRecords.h"
#include "camp/RenderCtx.h"

struct SaveSlotMarkerAnchorA {
    u8 unk00[8];
    s16 x;
    s16 y;
};
/* The animation timer embedded in the transition work. */
static __inline UiSpriteState *slotTimer(SaveSlotTransitionPrefixA *work)
{
    return reinterpret_cast<UiSpriteState *>(work->unk0000 + 0x12B8);
}

extern "C" {
extern RenderCtxA *g_renderCtx;
s32 vec2GetXInt(const UiSpriteState *);
s32 vec2GetYInt(const UiSpriteState *);
void efctSetSpeed(f32);
f32 vec2GetSpeed(const void *object);
s32 packNibblesAndByte(u32, u32, u32);
const SaveSlotMarkerAnchorA *FUN_001834a4(u32, s32);
void FUN_001835b4(s32, s32, s32, s32, s32, s32);

void FUN_003741cc(SaveSlotTransitionPrefixA *work)
{
    if (!work->transitionBusy && static_cast<s32>(work->transitionMode) <= 3) {
        s32 x = vec2GetXInt(slotTimer(work));
        s32 y = vec2GetYInt(slotTimer(work));
        f32 scale = vec2GetSpeed(slotTimer(work));
        UiSpriteState *base = reinterpret_cast<UiSpriteState *>(work->unk0000 + 0xAC);
        efctSetSpeed(vec2GetSpeed(base) * scale);
        const SaveSlotMarkerAnchorA *anchor = FUN_001834a4(13, work->transitionMode + 0x52);
        RenderCtxA *context = g_renderCtx;
        renderCtxSetB(context, packNibblesAndByte(6, 1, 0));
        FUN_001835b4(2, 13, 0x4B, anchor->x + x, anchor->y + y, 0x29);
        FUN_001835b4(2, 13, 0x4A, anchor->x + x, anchor->y + y, 0x29);
        FUN_001835b4(2, 13, 0x4C, anchor->x + x, anchor->y + y, 0x29);
        FUN_001835b4(2, 13, 0x4D, anchor->x + x, anchor->y + y, 0x29);
        context = g_renderCtx;
        renderCtxSetB(context, packNibblesAndByte(6, 7, 0));
        efctSetSpeed(1.0f);
    }
}
}
