/* NON_MATCHING: btlEntryHasCategoryThreeSkill shape; only the second equipment loop swaps the base/offset registers of its id load (retail ldr r0 / add r1, built ldr r1 / add r0). */
#include "shard/W4_Match6_BtlEntry.h"
#include "shard/W5_W5Match7_ScriptUnit.h"
#include "gamedata/Table04Record.h"
#include "gamedata/DevilRecord.h"
#include "gamedata/DataTable40.h"

extern "C" {

/* Whether one of the entry's equipped skills or its demon's default skills has the encoded category. */
static __inline u32 entryHasSkillCategory(const BtlEntry *entry, u32 category)
{
    if (entry->equipA != NULL) {
        for (s32 index = 0; index < 8; ++index) {
            const Table04Record *skill = dataTable40FindById(entry->equipA->items[index]);
            if (skill != NULL && skill->skillProperties.category == category) {
                return 1;
            }
        }
    }
    if (entry->equipB != NULL) {
        for (s32 index = 0; index < 8; ++index) {
            const Table04Record *skill = dataTable40FindById(entry->equipB->items[index]);
            if (skill != NULL && skill->skillProperties.category == category) {
                return 1;
            }
        }
    }
    if (entry->devil != NULL) {
        DevilRecord *demon = reinterpret_cast<DevilRecord *>(devilGetRecord(entry->id));
        for (s32 index = 0; index < 8; ++index) {
            const Table04Record *skill = dataTable40FindById(demon->skills[index]);
            if (skill != NULL && skill->skillProperties.category == category) {
                return 1;
            }
        }
    }
    return 0;
}

// Script command: sets the result to whether the script unit has a skill of the requested encoded category.
u32 FUN_00311fc4()
{
    u32 category = scrGetArg(0);
    BtlEntry *entry = reinterpret_cast<BtlEntry *>(reinterpret_cast<ScriptUnit *>(btlUnitGet(reinterpret_cast<BtlMainState *const *>(g_btlScriptUnit)))->entryView.entry);
    if (entryHasSkillCategory(entry, category)) {
        scrSetResult(1);
    } else {
        scrSetResult(0);
    }
    return 1;
}
}
