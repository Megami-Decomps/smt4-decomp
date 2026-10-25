#include "camp/RenderCtx.h"
#include "shard/TextureDrawCall.h"
#include "ui/PartyPanel.h"
#include "shard/S3UiLookup.h"

extern "C" {
extern PartyPanel *g_partyPanel;
extern RenderCtx *g_titleScene;
const UiTextMetrics *FUN_002bf4f8(u32 bank, s32 entry);
void efctSetSpeed(f32 speed);
f32 vec2GetSpeed(const void *object);
s32 packNibblesAndByte(u32 first, u32 second, u32 third);

// Draw the normal or animated panel sprite inside the temporary alpha-blend state.
void FUN_002512c4(s32 entry, s32 x, s32 y, u32 flags, s32 selected)
{
    PartyPanel *panel = g_partyPanel;
    const UiTextMetrics *position = FUN_002bf4f8(0x19, entry + 0x2D);
    RenderCtx *context = g_titleScene;
    s32 blend = packNibblesAndByte(6, 1, 0);
    renderStackSet(&context->stackB, blend);
    if (selected != 0) {
        efctSetSpeed(vec2GetSpeed(&panel->members[3]));
        FUN_002bf288(2, 0x19, 0x10, position->x + x, position->y + y, flags);
        efctSetSpeed(1.0f);
    } else {
        FUN_002bf288(2, 0x19, 0xF, position->x + x, position->y + y, flags);
    }
    context = g_titleScene;
    blend = packNibblesAndByte(6, 7, 0);
    renderStackSet(&context->stackB, blend);
}
}
