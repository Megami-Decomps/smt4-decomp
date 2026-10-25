#include "camp/RenderCtx.h"
#include "shard/TextureDrawCall.h"
#include "ui/PartyPanelState.h"
#include "util/PackNibbles.h"

struct PanelSpriteOrigin {
    /* 0x00 */ u8 unk00[8];
    /* 0x08 */ s16 x;
    /* 0x0a */ s16 y;
};

extern "C" {
extern PartyPanelStateA *g_partyPanel;
extern RenderCtxA *g_renderCtx;
PanelSpriteOrigin *FUN_001834a4(u32 table, s32 index);
void efctSetSpeed(f32 speed);
f32 vec2GetSpeed(const void *object);

// Draw the panel sprite, temporarily changing render state for its highlighted variant.
void partyPanelDrawHighlight(s32 index, s32 x, s32 y, u32 flags, s32 highlighted, f32 speed)
{
    PartyPanelStateA *panel = g_partyPanel;
    PanelSpriteOrigin *origin = FUN_001834a4(0x11, index + 0x57);
    if (highlighted) {
        efctSetSpeed(vec2GetSpeed(panel->animation.speedObject) * speed);
        RenderCtxA *context = g_renderCtx;
        s32 state = packNibblesAndByte(6, 1, 0);
        renderStackSet(&context->stackB, state);
        FUN_001835b4(2, 0x11, 0x4f, origin->x + x, origin->y + y, flags);
        context = g_renderCtx;
        state = packNibblesAndByte(6, 7, 0);
        renderStackSet(&context->stackB, state);
        efctSetSpeed(1.0f);
        return;
    }
    efctSetSpeed(speed);
    FUN_001835b4(2, 0x11, 0x4e, origin->x + x, origin->y + y, flags);
    efctSetSpeed(1.0f);
}
}
