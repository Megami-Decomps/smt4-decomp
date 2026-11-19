/* NON_MATCHING: count/color prologue scheduling, final variadic argument stores and literal string order differ. */
#include <stdio.h>
#include "skill/SkillSlotScreen.h"
#include "shard/TextureDrawCall.h"
#include "shard/S1ListPanel.h"
#include "AsdSDK/Source/Gfx/Text/AsdText.h"
#include "text/TextDraw.h"
#include "AsdSDK/Source/Gfx/AsdTexManager/AsdTMTexTable.h"

extern "C" {

void FUN_00180310(u32 layer, s32 x, s32 y, u32 enabled, u32 flags, u32 mode, const char *format, ...);
void FUN_00185e84(s16 id, s32 x, s32 y, u32 layer, u32 a, u32 b);
void statDrawClampedDelta(u32 unit, s16 id, s32 x, s32 y, u32 layer, u32 a);
void partyRecordSetEquippedItemClampRank(u32 unit, u16 id, s32 index);
s32 recordContainsPairedId(u32 unit, u16 id);
u32 skillGetAdjustedCost(u32 unit, u16 id);

/* Draws one skill row of the skill screen: the skill's name, icon and cost, or the empty-slot label. */
void FUN_003c33e8(SkillSlotScreen *screen, s32 index, u32 unit, s32 count, s32 x, s32 y, f32 effect)
{
    char text[64];
    u32 color = 0xffffffff;

    if (screen->slots[index] == 0) {
        sprintf(text, "\x81\x7c \x81\x7c \x81\x7c");
        const TextureTableEntryIV *label = asdTMTexTableEntryAt(0x1a, 0x178);
        textDrawString(2, 0xffffffff, text, label->x + x, label->y + y, 0.0f, 0.0f, effect);
        return;
    }
    texDrawTableEntryAtStoredOrigin(2, 0x1a, 0x174, x, y, 0x6a);
    texDrawTableEntryAtStoredOrigin(2, 0x1a, 0x175, x, y, 0x6a);
    texDrawTableEntryAtStoredOrigin(2, 0x1a, 0x176, x, y, 0x6f);
    if (index < count - screen->freedCount) {
        color = 0x9fe7ffff;
    }
    sprintf(text, "%s", FUN_0014bd84(screen->slots[index]));
    const TextureTableEntryIV *label = asdTMTexTableEntryAt(0x1a, 0x178);
    textDrawString(2, color, text, label->x + x, label->y + y, 0.0f, 0.0f, effect);
    const TextureTableEntryIV *icon = asdTMTexTableEntryAt(0x1a, 0x177);
    FUN_00185e84(screen->slots[index], icon->x + x, icon->y + y, 0x74, 0, 0);
    if (recordContainsPairedId(unit, screen->slots[index]) == 0) {
        partyRecordSetEquippedItemClampRank(unit, screen->slots[index], index);
    }
    statDrawClampedDelta(unit, screen->slots[index], icon->x + x, icon->y + y, 0x74, 0);
    const TextureTableEntryIV *cost = asdTMTexTableEntryAt(0x1a, 0x17c);
    FUN_00180310(1, cost->x + x, cost->y + y, 1, 4, 0x79, "%d", skillGetAdjustedCost(unit, screen->slots[index]));
}

} /* extern "C" */
