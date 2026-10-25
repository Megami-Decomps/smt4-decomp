#include "camp/RenderCtx.h"
#include "shard/TextureDrawCall.h"
#include "ui/PartyPanel.h"
#include "shard/S3UiLookup.h"

extern "C" {
extern PartyPanel *g_partyPanel;
extern RenderCtx *g_titleScene;
const UiTextMetrics *asdTMTexTableEntryAt(u32 bank, s32 entry);
void efctSetSpeed(f32 speed);
f32 vec2GetSpeed(const void *object);
s32 packNibblesAndByte(u32 first, u32 second, u32 third);

// Draw the selected marker under the panel's animation speed and blend mode.
void FUN_0025117c(s32 entry, s32 x, s32 y, u32 flags, s32 selected)
{
    PartyPanel *panel = g_partyPanel;
    const UiTextMetrics *position = asdTMTexTableEntryAt(0x19, entry + 0x57);
    if (selected != 0) {
        efctSetSpeed(vec2GetSpeed(&panel->members[3]));
        RenderCtx *context = g_titleScene;
        s32 blend = packNibblesAndByte(6, 1, 0);
        renderStackSetCounted(&context->stackB, blend);
        FUN_002bf288(2, 0x19, 0x4F, position->x + x, position->y + y, flags);
        context = g_titleScene;
        blend = packNibblesAndByte(6, 7, 0);
        renderStackSetCounted(&context->stackB, blend);
        efctSetSpeed(1.0f);
        return;
    }
    FUN_002bf288(2, 0x19, 0x4E, position->x + x, position->y + y, flags);
}
}
