#include "ui/MessageMainA.h"
#include "shard/TextureDrawCall.h"
#include "ui/UiSpriteApi.h"

extern "C" {
void efctSetSpeed(f32);
}

/* Create four message effects using the panel's base and accent speed multipliers. */
extern "C" void messageCreatePanelEffects(u32 first, u32 second, u32 accent, u32 last)
{
    MessageWindowA *panel = g_messageMain.banner;
    f32 normalSpeed = 1.0f;
    f32 speed = normalSpeed * vec2GetSpeed(&panel->sprites[40]);
    efctSetSpeed(speed);
    texDrawTableEntryAtStoredOrigin(2, 4, first, 0, 0, 241);
    texDrawTableEntryAtStoredOrigin(2, 4, second, 0, 0, 241);
    f32 accentSpeed = normalSpeed * vec2GetSpeed(&panel->sprites[36]);
    efctSetSpeed(accentSpeed * speed);
    texDrawTableEntryAtStoredOrigin(2, 4, accent, 0, 0, 241);
    efctSetSpeed(speed);
    texDrawTableEntryAtStoredOrigin(2, 4, last, 0, 0, 241);
    efctSetSpeed(normalSpeed);
}
