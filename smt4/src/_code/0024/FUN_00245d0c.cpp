/* NON_MATCHING: Saved float registers, zero-buffer/conversion scheduling and ailment-name block order differ. */
#include "shard/W4_Match6_BtlEntry.h"
#include "battle/btlMain.h"
#include "battle/BtlMainAccess.h"
#include "util/Random.h"

/* Ailment modifiers extend past the shared stat[12] prefix; this view avoids changing that boundary. */
struct BattleAilmentChanceView {
    u8 unk000[0x72];
    s16 modifiers[26];
    u8 unk0A6[0x11E];
    s16 luck;
};
extern "C" {
BtlEntry *btlMainFindEntryByListedId(BtlMainState *state, u32 id);
void textFormatBuffer(char *output, const char *format, ...);

/* Rolls an ailment's luck-adjusted base chance plus the combatant's corresponding modifier. */
u32 FUN_00245d0c(u32 id, s32 ailment)
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
    if (ailment == 3) {
        textFormatBuffer(text, "\x8d\x8f\x88\xf3");
    } else if (ailment == 6) {
        textFormatBuffer(text, "\x8d\xac\x97\x90");
    } else if (ailment == 7) {
        textFormatBuffer(text, "\x90\x87\x96\xb0");
    } else if (ailment == 8) {
        textFormatBuffer(text, "\x8b\xd9\x94\x9b");
    }
    return (f32)randRange(99) < chance;
}
}
