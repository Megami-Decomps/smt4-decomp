/* NON_MATCHING: second equipment loop exchanges base/index registers and the final success return is not shared. */
#include "shard/W4_Match6_BtlEntry.h"
#include "shard/W5_W5Match7_ScriptUnit.h"
#include "gamedata/Table04Record.h"
#include "gamedata/DevilRecord.h"

extern "C" {
Table04Record *dataTable40FindById(u32 skill);

// Check equipped and default demon skills for the requested encoded category.
u32 FUN_00311fc4()
{
    u32 category = scrGetArg(0);
    BtlEntry *entry = reinterpret_cast<BtlEntry *>(reinterpret_cast<ScriptUnit *>(btlUnitGet(reinterpret_cast<BtlState *const *>(g_btlScriptUnit)))->entryView.entry);
    if (entry->equipA != NULL) {
        for (s32 index = 0; index < 8; ++index) {
            Table04Record *skill = dataTable40FindById(entry->equipA->items[index]);
            if (skill != NULL && category == skill->skillProperties.category) {
                scrSetResult(1);
                return 1;
            }
        }
    }
    if (entry->equipB != NULL) {
        for (s32 index = 0; index < 8; ++index) {
            Table04Record *skill = dataTable40FindById(entry->equipB->items[index]);
            if (skill != NULL && category == skill->skillProperties.category) {
                scrSetResult(1);
                return 1;
            }
        }
    }
    if (entry->devil != NULL) {
        DevilRecord *demon = reinterpret_cast<DevilRecord *>(devilGetRecord(entry->id));
        for (s32 index = 0; index < 8; ++index) {
            Table04Record *skill = dataTable40FindById(demon->skillList.ids[index]);
            if (skill != NULL && category == skill->skillProperties.category) {
                scrSetResult(1);
                return 1;
            }
        }
    }
    scrSetResult(0);
    return 1;
}
}
