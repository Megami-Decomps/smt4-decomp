#include "script/ScriptArgs.h"
#include "battle/BtlMainAccess.h"
#include "battle/btlMain.h"
#include "shard/W6_W6Match3_BtlCombatantEntryA.h"
#include "shard/W6_W6Match7_BattleCandidateMasks.h"
#include "battle/BtlEntrySkills.h"
extern "C" {

/* Script query: whether an eligible battle entry with id argument 0 has a category-three skill. */
u32 scrBtlEntryHasCategoryThreeSkill(void)
{
    u32 id = scrGetArg(0);
    for (s32 slot = 0; slot < 109; ++slot) {
        BtlCombatantEntryA *entry = &btlGetMainState()->entries[slot];
        if ((entry->flags & g_btlCandidateMasks.unavailable) != 0 &&
            (entry->flags & g_btlCandidateMasks.required) != 0 &&
            (entry->flags & g_btlCandidateMasks.excluded) == 0 && entry->data.id == id &&
            unitHasCategoryThreeSkill(entry)) {
            scrSetResult(1);
            return 1;
        }
    }
    scrSetResult(0);
    return 1;
}
}
