#include "battle/BtlEntryA.h"
#include "shard/W6_W6Match7_BattleCandidateMasks.h"
#include "gamedata/SkillDataRecord.h"

extern "C" {
s32 btlSlotHasReadyKind(const void *);
}

/* Checks the active skill or the list of available skills for a usable action. */
extern "C" u32 btlCombatantTestApplicableActions(const BtlCombatantEntryA *entry)
{
    if ((entry->flags & g_btlCandidateMasks.unavailable) != 0 ||
        hasSingleAction(g_btlCandidateMasks, *entry)) {
        if (entry->data.actionList.single.kind == 2 || entry->data.actionList.single.kind == 3) {
            void *record = skillDataFindById(entry->data.actionList.single.id);
            if (record != NULL && btlSlotHasReadyKind(record) != 0) {
                return 1;
            }
        }
    } else {
        for (s32 i = 0; i < 10; ++i) {
            if (entry->data.actionList.available[i].kind == 2 || entry->data.actionList.available[i].kind == 3) {
                void *record = skillDataFindById(entry->data.actionList.available[i].id);
                if (record != NULL && btlSlotHasReadyKind(record) != 0) {
                    return 1;
                }
            }
        }
    }
    return 0;
}
