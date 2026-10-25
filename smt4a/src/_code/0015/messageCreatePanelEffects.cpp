#include "ui/MessageMain.h"
#include "ui/UiSpriteState.h"

extern "C" {
extern MessageGlobalsA g_messageMain;
void efctSetSpeed(f32);
f32 vec2GetSpeed(const void *object);
void FUN_001835b4(s32, s32, u32, s32, s32, s32);
}

/* Create four message effects using the panel's base and accent speed multipliers. */
extern "C" void messageCreatePanelEffects(u32 first, u32 second, u32 accent, u32 last)
{
    MessagePanelA *panel = g_messageMain.panel;
    f32 normalSpeed = 1.0f;
    f32 speed = normalSpeed * vec2GetSpeed(panel->spritesCA4[20]);
    efctSetSpeed(speed);
    FUN_001835b4(2, 4, first, 0, 0, 241);
    FUN_001835b4(2, 4, second, 0, 0, 241);
    f32 accentSpeed = normalSpeed * vec2GetSpeed(panel->spritesCA4[16]);
    efctSetSpeed(accentSpeed * speed);
    FUN_001835b4(2, 4, accent, 0, 0, 241);
    efctSetSpeed(speed);
    FUN_001835b4(2, 4, last, 0, 0, 241);
    efctSetSpeed(normalSpeed);
}
