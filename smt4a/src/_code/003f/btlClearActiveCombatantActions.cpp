#include "battle/btlMain.h"
#include "shard/W6_W6Match8_BattleRosterRecordA.h"
#include "shard/W6_W6Match3_BtlCombatantEntryA.h"
#include "battle/BtlGlobals.h"

extern "C" {
void clearTwoWords(void *words);

/* Clear eligible roster members' action fields, optionally filtered by category (0 = non-special, 1 = special). */
void btlClearActiveCombatantActions(BtlMainStateA *battle, s32 category)
{
    for (s32 i = 0; i < 109; ++i) {
        s32 index = battle->roster[i].motion.unitIndex;
        if (index < 0)
            continue;
        if ((g_btlMain.combatantMasks.required & battle->entries[index].flags) &&
            !(g_btlMain.exclusionMask & battle->entries[index].flags)) {
            BtlUnitDataA *data = &battle->entries[index].data;
            if (data != NULL) {
                if (category == 0) {
                    if (!(battle->entries[index].flags & g_btlMain.actorCategories[2]))
                        clearTwoWords(&data->actionKind);
                } else if (category == 1) {
                    if (battle->entries[index].flags & g_btlMain.actorCategories[2])
                        clearTwoWords(&data->actionKind);
                } else {
                    clearTwoWords(&data->actionKind);
                }
            }
        }
    }
}
} /* extern "C" */
