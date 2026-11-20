/* NON_MATCHING: the ailment-name switch now lays its blocks out as retail (cases in retail's block order 7, 6, 8, 3); the
 * saved float registers (luck in s17, the shared 20.0f in s18) and the zero-buffer/conversion scheduling still differ. */
#include <stdio.h>
#include "battle/BtlEntry.h"
#include "battle/btlMain.h"
#include "battle/BtlMainAccess.h"
#include "util/Random.h"
#include "battle/BtlGlobals.h"

/* Ailment modifiers extend past the shared stat[12] prefix; this view avoids changing that boundary. */
struct BattleAilmentChanceView {
    u8 unk000[0x72];
    s16 modifiers[26];
    u8 unk0A6[0x11E];
    s16 luck;
};
extern "C" {

/* Rolls an ailment's luck-adjusted base chance plus the combatant's corresponding modifier. */
u32 btlRollAilmentChance(u32 id, s32 ailment)
{
    BattleAilmentChanceView *entry = (BattleAilmentChanceView *)btlMainFindEntryByListedId(btlGetMainState(), id);
    s32 modifier;
    f32 base;
    if (ailment == 3) {
        modifier = 25;
        base = 5.0f;
    } else if (ailment == 6) {
        modifier = 23;
        base = 25.0f;
    } else if (ailment == 7) {
        modifier = 22;
        base = 30.0f;
    } else if (ailment == 8) {
        modifier = 24;
        base = 20.0f;
    } else {
        return 1;
    }
    f32 luck = entry->luck;
    entry = (BattleAilmentChanceView *)btlMainFindEntryByListedId(btlGetMainState(), id);
    s32 adjustment = entry != NULL ? entry->modifiers[modifier] : 0;
    f32 chance = base + base * luck * 0.01f;
    char text[32] = {0};
    if (chance > 80.0f) {
        chance = 80.0f;
    }
    chance += (f32)adjustment * 20.0f;
    switch (ailment) {
    case 7:
        sprintf(text, "\x90\x87\x96\xb0");
        break;
    case 6:
        sprintf(text, "\x8d\xac\x97\x90");
        break;
    case 8:
        sprintf(text, "\x8b\xd9\x94\x9b");
        break;
    case 3:
        sprintf(text, "\x8d\x8f\x88\xf3");
        break;
    }
    return (f32)randRange(99) < chance;
}
}
