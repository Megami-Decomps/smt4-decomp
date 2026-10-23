/* NON_MATCHING: scale accessor materialization, floating scratch preservation and blend-state scratch registers differ. */
#include "shard/W9_W9Match8_WorkRecords.h"
#include "camp/RenderCtx.h"

struct SaveSlotMarkerAnchorA {
    u8 unk00[8];
    s16 x;
    s16 y;
};
extern "C" {
extern RenderCtxA *g_renderCtx;
s32 vec2GetXInt(const UiSpriteState *);
s32 vec2GetYInt(const UiSpriteState *);
void efctSetSpeed(f32);
s32 packNibblesAndByte(u32, u32, u32);
const SaveSlotMarkerAnchorA *FUN_001834a4(u32, s32);
void FUN_001835b4(s32, s32, s32, s32, s32, s32);

void FUN_003741cc(SaveSlotTransitionPrefixA *work)
{
    if (!work->unk38b7[2] && static_cast<s32>(work->transitionMode) < 4) {
        UiSpriteState *position = reinterpret_cast<UiSpriteState *>(work->unk0000 + 0x12B8);
        s32 x = vec2GetXInt(position);
        s32 y = vec2GetYInt(position);
        f32 scale = position->unk20;
        UiSpriteState *base = reinterpret_cast<UiSpriteState *>(work->unk0000 + 0xAC);
        efctSetSpeed(base->unk20 * scale);
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
