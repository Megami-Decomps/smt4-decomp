/* NON_MATCHING: category predicates are combined and the derived subrecord null guard is eliminated. */
#include "battle/btlMain.h"
#include "shard/W6_W6Match8_BattleRosterRecordA.h"
#include "shard/W6_W6Match3_BtlCombatantEntryA.h"

struct CombatantResetView { u8 unk000[0x26a]; u16 words[4]; };
extern "C" {
extern BtlMainGlobalsA g_btlMainState;
void clearTwoWords(void *words);

// Clear eligible roster members' transient words, optionally selecting their special category.
void FUN_003f22fc(BtlMainStateA *battle, s32 category)
{
    for (s32 i = 0; i < 109; ++i) {
        s32 index = battle->roster[i].motion.unitIndex;
        if (index < 0)
            continue;
        BtlCombatantEntryA *entry = &battle->entries[index];
        u64 flags = entry->flags;
        if ((flags & g_btlMainState.combatantMasks.required) &&
            !(flags & g_btlMainState.actorCategories[0])) {
            bool special = (flags & g_btlMainState.actorCategories[2]) != 0;
            if ((category == 0 && !special) || (category == 1 && special) || (category != 0 && category != 1))
                clearTwoWords(((CombatantResetView *)entry)->words);
        }
    }
}
}
