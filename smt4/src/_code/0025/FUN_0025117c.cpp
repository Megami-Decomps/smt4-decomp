/* NON_MATCHING: effect-speed load uses the panel base directly instead of retail's member-relative base; all other instructions match. */
#include "camp/RenderCtx.h"
#include "ui/PartyPanel.h"
#include "shard/S3UiLookup.h"

extern "C" {
extern PartyPanel *g_partyPanel;
extern RenderCtx *g_titleScene;
const UiTextMetrics *FUN_002bf4f8(u32 bank, s32 entry);
void efctSetSpeed(f32 speed);
s32 packNibblesAndByte(u32 first, u32 second, u32 third);
void FUN_002bf288(u32 layer, u32 bank, u32 sprite, s32 x, s32 y, u32 flags);

// Draw the selected marker under the panel's animation speed and blend mode.
void FUN_0025117c(s32 entry, s32 x, s32 y, u32 flags, s32 selected)
{
    PartyPanel *panel = g_partyPanel;
    const UiTextMetrics *position = FUN_002bf4f8(0x19, entry + 0x57);
    if (selected != 0) {
        efctSetSpeed(panel->members[3].effectSpeed);
        RenderCtx *context = g_titleScene;
        s32 blend = packNibblesAndByte(6, 1, 0);
        renderStackSet(&context->stackB, blend);
        FUN_002bf288(2, 0x19, 0x4F, position->x + x, position->y + y, flags);
        context = g_titleScene;
        blend = packNibblesAndByte(6, 7, 0);
        renderStackSet(&context->stackB, blend);
        efctSetSpeed(1.0f);
        return;
    }
    FUN_002bf288(2, 0x19, 0x4E, position->x + x, position->y + y, flags);
}
}
