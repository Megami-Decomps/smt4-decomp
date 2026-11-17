#include "camp/RenderCtx.h"
#include "shard/TextureDrawCall.h"
#include "ui/PartyPanelState.h"
#include "shard/S3UiLookup.h"
#include "AsdSDK/Source/Gfx/AsdTexManager/AsdTMTexTable.h"
#include "camp/RenderCtxTitle.h"
#include "ui/UiSpriteApi.h"

extern "C" {
void efctSetSpeed(f32 speed);
s32 packNibblesAndByte(u32 first, u32 second, u32 third);

// Draw the normal or animated panel sprite inside the temporary alpha-blend state.
void FUN_002512c4(s32 entry, s32 x, s32 y, u32 flags, s32 selected)
{
    PartyPanelState *panel = g_partyPanel;
    const TextureTableEntryIV *position = asdTMTexTableEntryAt(0x19, entry + 0x2D);
    RenderCtx *context = g_titleScene;
    s32 blend = packNibblesAndByte(6, 1, 0);
    renderStackSet(&context->stackB, blend);
    if (selected != 0) {
        efctSetSpeed(vec2GetSpeed((const UiSpriteState *)&panel->sprites[PARTY_PANEL_SPRITE_HIGHLIGHT]));
        texDrawTableEntryAtStoredOrigin(2, 0x19, 0x10, position->x + x, position->y + y, flags);
        efctSetSpeed(1.0f);
    } else {
        texDrawTableEntryAtStoredOrigin(2, 0x19, 0xF, position->x + x, position->y + y, flags);
    }
    context = g_titleScene;
    blend = packNibblesAndByte(6, 7, 0);
    renderStackSet(&context->stackB, blend);
}
}
