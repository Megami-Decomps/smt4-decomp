#include "shard/S1ListPanel.h"
#include "camp/RenderCtxA.h"
#include "shard/TextureDrawCall.h"
#include "util/BitsAndBytes.h"
extern "C" {
void efctSetSpeed(f32 speed);
SpriteInfo *asdTMTexTableEntryAt(u32 group, u32 image);
void uiDrawItemOrStatusIcon(u32 value, s32 x, s32 y, s32 priority, s32 flags);

// Draw the layered HUD ornament with additive and normal-alpha blend sections.
void btlDrawLayeredHud(u32 context, s32 x, s32 y, u32 value, f32 speed)
{
    efctSetSpeed(speed);
    texDrawTableEntryAtStoredOrigin(2, 12, 131, x, y, 11);
    texDrawTableEntryAtStoredOrigin(2, 12, 132, x, y, 16);
    RenderCtxA *render = g_renderCtx;
    u32 blend = packNibblesAndByte(6, 1, 0);
    renderCtxSetB(render, blend);
    for (s32 index = 0; index < 3; ++index)
        texDrawTableEntryAtStoredOrigin(2, 12, index + 128, x, y, 21);
    render = g_renderCtx;
    blend = packNibblesAndByte(6, 7, 0);
    renderStackSet(&render->stackB, blend);
    SpriteInfo *layout = asdTMTexTableEntryAt(12, 133);
    uiDrawItemOrStatusIcon(value, layout->x + x, layout->y + y, 26, 0);
    efctSetSpeed(1.0f);
}
}
