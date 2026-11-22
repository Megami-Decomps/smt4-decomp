#include "battle/BtlEntry.h"
#include "shard/W5_W5Match7_ScriptUnit.h"
#include "gamedata/SkillDataRecord.h"
#include "gamedata/NkmBaseRecord.h"
#include "gamedata/SkillDataLookup.h"

extern "C" {

/* Whether one of the entry's equipped skills or its demon's default skills has the encoded category. */
static __inline u32 entryHasSkillCategory(const BtlEntry *entry, u32 category)
{
    s32 index;
    const SkillDataRecord *skill;
    NkmBaseRecord *demon;

    if (entry->data.equipA != NULL) {
        for (index = 0; index < 8; ++index) {
            skill = skillDataFindById(entry->data.equipA->items[index]);
            if (skill != NULL && skill->skillProperties.category == category) {
                return 1;
            }
        }
    }
    if (entry->data.equipB != NULL) {
        for (index = 0; index < 8; ++index) {
            skill = skillDataFindById(entry->data.equipB->items[index]);
            if (skill != NULL && skill->skillProperties.category == category) {
                return 1;
            }
        }
    }
    if (entry->data.devil != NULL) {
        demon = reinterpret_cast<NkmBaseRecord *>(nkmBaseGetRecord(entry->data.id));
        for (index = 0; index < 8; ++index) {
            skill = skillDataFindById(demon->skills[index]);
            if (skill != NULL && skill->skillProperties.category == category) {
                return 1;
            }
        }
    }
    return 0;
}

// Script command: sets the result to whether the script unit has a skill of the requested encoded category.
u32 scrBtlUnitHasSkillCategory()
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
