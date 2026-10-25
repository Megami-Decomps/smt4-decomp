/* NON_MATCHING: combatant flag loads and action-list branch placement differ. */
#include "shard/W6_W6Match3_BtlCombatantEntryA.h"
#include "shard/W6_W6Match7_BattleCandidateMasks.h"
#include "gamedata/Table04Record.h"

extern "C" {
s32 FUN_002a6a38(const void *);
}

/* Test applicable skill records, using the single action for restricted combatants. */
extern "C" u32 FUN_003248e4(const BtlCombatantEntryA *entry)
{
    if ((entry->flags & g_btlCandidateMasks.unavailable) == 0 &&
        (entry->flags & g_btlCandidateMasks.singleAction) == 0) {
        for (s32 i = 0; i < 10; ++i) {
            const BtlCombatantActionA *action = &entry->actionList.available[i];
            if (action->kind == 2 || action->kind == 3) {
                void *record = dataTable04FindById(action->id);
                if (record != NULL && FUN_002a6a38(record) != 0) {
                    return 1;
                }
            }
        }
    } else {
        const BtlCombatantActionA *action = &entry->actionList.single;
        if (action->kind == 2 || action->kind == 3) {
            void *record = dataTable04FindById(action->id);
            if (record != NULL && FUN_002a6a38(record) != 0) {
                return 1;
            }
        }
    }
    return 0;
}
