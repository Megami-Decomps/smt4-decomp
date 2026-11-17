#include "battle/btlMain.h"
#include "shard/W6_W6Match3_BtlCombatantEntryA.h"
#include "battle/BattleUnitSlot.h"

struct BtlActionContext {
    /* 0x00 */ BtlMainStateA *battle;
};

extern "C" {
extern u64 g_btlTargetableMask;

s32 btlAiFilterCandidatesByExclusionChance(BtlMainStateA **owner, s32 *candidates, s32 count, s32 force);
u32 lcgRandomRange(s32 limit);

/* Marks one random combatant among those matching the mask as chosen in the acting unit's selection flags. */
void btlActionMarkRandomTargetableUnit(BtlActionContext *context)
{
    s32 candidates[110];
    s32 count = 0;
    BtlMainStateA *battle = context->battle;

    for (s32 i = 0; i < 109; i++) {
        if ((battle->entries[i].flags & g_btlTargetableMask) != 0) {
            candidates[count++] = battle->entries[i].selectionIndex;
        }
    }
    u16 remaining = btlAiFilterCandidatesByExclusionChance(&context->battle, candidates, count, 0);
    s32 pick = lcgRandomRange((u16)(remaining - 1));
    btlUnitGet(&context->battle)->targets[candidates[pick]] = 1;
}

} /* extern "C" */
