/* NON_MATCHING: target/g_statusDown/alternate saved-register roles (r8/r9/r6) differ from retail (r9/r8/r6) and second g_statusDown load is not hoisted. */
#include "ui/UiSpriteApi.h"
#include "status/StatusDownA.h"
#include "shard/TextureDrawCall.h"
#include <stddef.h>

extern "C" {
void efctSetSpeed(f32 speed);

// Build the status-down panel and its mode-specific accents.
void statusDownCreatePanelEffects(u32 target, u32 flags, s32 alternate)
{
    efctSetSpeed(vec2GetSpeed(&g_statusDown->sprites[1]));
    for (s32 i = 0; i < 3; ++i)
        texDrawTableEntryAtStoredOrigin(2, 0x12, 0x56f + i, target, flags, 0xbf);
    efctSetSpeed(1.0f);
    texDrawTableEntryAtStoredOrigin(2, 0x12, 0x572, target, flags, 0xc0);
    s32 panel, firstAccent, secondAccent, finalAccent;
    if (alternate) {
        panel = 0x5b1;
        firstAccent = 0x5b2;
        secondAccent = 0x5b3;
        finalAccent = 0x5b4;
    } else {
        panel = 0x573;
        firstAccent = 0x574;
        secondAccent = 0x575;
        finalAccent = 0x59f;
    }
    texDrawTableEntryAtStoredOrigin(2, 0x12, panel, target, flags, 0xc1);
    texDrawTableEntryAtStoredOrigin(2, 0x12, firstAccent, target, flags, 0xc1);
    texDrawTableEntryAtStoredOrigin(2, 0x12, secondAccent, target, flags, 0xc2);
    efctSetSpeed(vec2GetSpeed(&g_statusDown->sprites[3]));
    texDrawTableEntryAtStoredOrigin(2, 0x12, finalAccent, target, flags, 0xc4);
    efctSetSpeed(1.0f);
}
}
