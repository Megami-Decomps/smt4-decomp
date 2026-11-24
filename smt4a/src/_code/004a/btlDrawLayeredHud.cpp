#include "battle/BtlUiItemDescriptions.h"
#include "shard/S1ListPanel.h"
#include "camp/RenderCtxA.h"
#include "shard/TextureDrawCall.h"
#include "util/BitsAndBytes.h"
#include "AsdSDK/Source/Gfx/AsdTexManager/AsdTMTexTable.h"
extern "C" {
void efctSetSpeed(f32 speed);
void uiDrawItemOrStatusIcon(u32 value, s32 x, s32 y, s32 priority, s32 flags);

/* Draws the layered HUD ornament with additive and normal-alpha blend sections. */
void btlDrawLayeredHud(BtlUiA *context, s32 x, s32 y, u32 value, f32 speed)
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
    renderStackSet(render->stacks + RENDER_STACK_B, blend);
    TextureTableEntryIV *layout = asdTMTexTableEntryAt(12, 133);
    uiDrawItemOrStatusIcon(value, layout->x + x, layout->y + y, 26, 0);
    efctSetSpeed(1.0f);
}
} /* extern "C" */
