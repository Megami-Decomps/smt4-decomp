#include "ui/SpriteIndicator.h"
#include "shard/TextureDrawCall.h"
#include "shard/S1ListPanel.h"

extern "C" {
extern RenderCtxA *g_renderCtx;
SpriteInfo *FUN_001834a4(u32 group, s32 sprite);
void efctSetSpeed(f32 speed);
u32 packNibblesAndByte(u32 first, u32 second, u32 byte);

// Draw the selected indicator at the sprite's origin using a temporary blend mode.
void uiDrawSelectedSpriteIndicator(SpriteIndicatorOwner *owner, s32 x, s32 y, f32 speed)
{
    if (owner->spriteIndex >= 0 && owner->state != 2) {
        SpriteInfo *sprite = FUN_001834a4(17, owner->spriteIndex + 174);
        s32 drawX = sprite->x + x;
        s32 drawY = y + sprite->y;
        efctSetSpeed(speed);
        RenderCtxA *context = g_renderCtx;
        u32 state = packNibblesAndByte(6, 1, 0);
        renderCtxSetB(context, state);
        FUN_001835b4(2, 17, 16, drawX, drawY, 121);
        context = g_renderCtx;
        state = packNibblesAndByte(6, 7, 0);
        renderCtxSetB(context, state);
        efctSetSpeed(speed);
    }
}
}
