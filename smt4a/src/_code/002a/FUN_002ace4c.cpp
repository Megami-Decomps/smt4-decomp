#include "shard/S1ListPanel.h"
#include "camp/RenderCtxA.h"
#include "shard/TextureDrawCall.h"
#include "ui/PartyPanelStateA.h"
#include "util/BitsAndBytes.h"
#include "AsdSDK/Source/Gfx/AsdTexManager/AsdTMTexTable.h"

extern "C" {
void efctSetSpeed(f32 speed);
f32 vec2GetSpeed(const void *object);

void FUN_002ace4c(s32 index, s32 x, s32 y, u32 color, s32 animated, f32 speed)
{
    PartyPanelStateA *panel = g_partyPanel;
    const TextureTableEntryIV *sprite = asdTMTexTableEntryAt(0x11, index + 0x2d);
    renderCtxSetB(g_renderCtx, packNibblesAndByte(6, 1, 0));
    if (animated) {
        efctSetSpeed(vec2GetSpeed(&panel->sprites[PARTY_PANEL_SPRITE_HIGHLIGHT]) * speed);
        texDrawTableEntryAtStoredOrigin(2, 0x11, 0x10, sprite->x + x, sprite->y + y, color);
        efctSetSpeed(1.0f);
    } else {
        efctSetSpeed(speed);
        texDrawTableEntryAtStoredOrigin(2, 0x11, 0xf, sprite->x + x, sprite->y + y, color);
        efctSetSpeed(1.0f);
    }
    renderCtxSetB(g_renderCtx, packNibblesAndByte(6, 7, 0));
}
}
