/* NON_MATCHING: retail preserves sprite getter return values and a unity VFP constant; direct field loads optimize those moves away. */
#include "ui/MessageMain.h"
#include "ui/UiSpriteState.h"

extern "C" {
extern MessageGlobalsA g_messageMain;
void efctSetSpeed(f32);
void FUN_001835b4(s32, s32, u32, s32, s32, s32);
}

/* Create four message effects using the panel's base and accent speed multipliers. */
extern "C" void FUN_001519c4(u32 first, u32 second, u32 accent, u32 last)
{
    MessagePanelA *panel = g_messageMain.panel;
    f32 speed = ((const UiSpriteState *)panel->spritesCA4[20])->unk20;
    efctSetSpeed(speed);
    FUN_001835b4(2, 4, first, 0, 0, 241);
    FUN_001835b4(2, 4, second, 0, 0, 241);
    efctSetSpeed(((const UiSpriteState *)panel->spritesCA4[16])->unk20 * speed);
    FUN_001835b4(2, 4, accent, 0, 0, 241);
    efctSetSpeed(speed);
    FUN_001835b4(2, 4, last, 0, 0, 241);
    efctSetSpeed(1.0f);
}
