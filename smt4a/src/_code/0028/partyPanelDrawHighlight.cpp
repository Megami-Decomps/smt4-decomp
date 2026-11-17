#include "camp/RenderCtx.h"
#include "camp/RenderCtxA.h"
#include "shard/TextureDrawCall.h"
#include "ui/PartyPanelStateA.h"
#include "util/BitsAndBytes.h"
#include "AsdSDK/Source/Gfx/AsdTexManager/AsdTMTexTable.h"
#include "ui/UiSpriteApi.h"

extern "C" {
void efctSetSpeed(f32 speed);

// Draw the panel sprite, temporarily changing render state for its highlighted variant.
void partyPanelDrawHighlight(s32 index, s32 x, s32 y, u32 flags, s32 highlighted, f32 speed)
{
    PartyPanelStateA *panel = g_partyPanel;
    TextureTableEntryIV *origin = asdTMTexTableEntryAt(0x11, index + 0x57);
    if (highlighted) {
        efctSetSpeed(vec2GetSpeed((const UiSpriteState *)&panel->sprites[PARTY_PANEL_SPRITE_HIGHLIGHT]) * speed);
        RenderCtxA *context = g_renderCtx;
        s32 state = packNibblesAndByte(6, 1, 0);
        renderStackSet(&context->stackB, state);
        texDrawTableEntryAtStoredOrigin(2, 0x11, 0x4f, origin->x + x, origin->y + y, flags);
        context = g_renderCtx;
        state = packNibblesAndByte(6, 7, 0);
        renderStackSet(&context->stackB, state);
        efctSetSpeed(1.0f);
        return;
    }
    efctSetSpeed(speed);
    texDrawTableEntryAtStoredOrigin(2, 0x11, 0x4e, origin->x + x, origin->y + y, flags);
    efctSetSpeed(1.0f);
}
}
