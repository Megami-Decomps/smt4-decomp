#include "common.h"
#include "camp/Unite/UniteWork.h"
#include "text/TextDraw.h"
#include "AsdSDK/Source/Gfx/AsdTexManager/AsdTMTexTable.h"

extern "C" {
UniteWorkA *uniteGetWork();
void efctSetSpeed(f32 speed);
u8 recordGetModeForId(s32 recordId);
void largeGridDrawButtonStrip(UniteWorkA *work, s32 x, s32 y,
                              s32 selectedIndex, f32 speed);
extern u8 g_layeredSpriteEffectResource[];

// Draw the fusion button strip and tint its caption for the selected touch region.
f32 uniteDrawSelectionButtonStrip(s32 x, s32 y, f32 speed)
{
    UniteWorkA *work = uniteGetWork();
    u32 color = 0x9fe7ffffU;
    efctSetSpeed(speed);

    s32 mode = recordGetModeForId(work->touchA.rowRegions[work->selectionA.selectedIndex]);
    if (mode == 1 || mode == 2 || mode == 6)
        color = 0xf5ff9fffU;

    const TextureTableEntryIV *strip = asdTMTexTableEntryAt(0x1a, 0x1af);
    largeGridDrawButtonStrip(work, strip->x + x, strip->y + y,
                            work->selectionA.selectedIndex, speed);
    efctSetSpeed(speed);
    const TextureTableEntryIV *effect = asdTMTexTableEntryAt(0x1a, 0x1a2);

    return textDrawString(static_cast<f32>(effect->x + strip->x + x), static_cast<f32>(strip->y + effect->y + y), 0.0f,
                       3,
                       0.0f,
                       color, speed, (const char *)g_layeredSpriteEffectResource);
}
}
