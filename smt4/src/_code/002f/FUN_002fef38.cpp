#include "battle/BtlEntry.h"
#include "battle/btlMain.h"
#include "shard/PassiveSkill.h"
#include "gamedata/NkmBaseRecord.h"
#include "battle/BtlMainAccess.h"
#include "gamedata/SkillDataLookup.h"

extern "C" {
s32 scrGetArg(u32 index);
void scrSetResult(s32 result);

u32 FUN_002fef38()
{
    u32 id = scrGetArg(0);
    for (s32 index = 0; index < BTL_ENTRY_COUNT; ++index) {
        BtlEntry *entry = &btlGetMainState()->entries[index];
        if ((entry->flags & BTL_ENTRY_FLAG_PRESENT) != 0 &&
            (entry->flags & BTL_ENTRY_FLAG_ACTIVE) != 0 &&
            (entry->flags & BTL_ENTRY_FLAG_BLOCKED) == 0 && entry->data.id == id) {
            if (entry->data.equipA != NULL) {
                for (s32 slot = 0; slot < 8; ++slot) {
                    const SkillDataRecord *skill = skillDataFindById(entry->data.equipA->skillIds[slot]);
                    if (skill != NULL && skill->sort.category == 3) {
                        scrSetResult(1);
                        return 1;
                    }
                }
            }
            if (entry->data.equipB != NULL) {
                for (s32 slot = 0; slot < 8; ++slot) {
                    const SkillDataRecord *skill = skillDataFindById(entry->data.equipB->skillIds[slot]);
                    if (skill != NULL && skill->sort.category == 3) {
                        scrSetResult(1);
                        return 1;
                    }
                }
            }
            if (entry->data.devil != NULL) {
                const NkmBaseRecord *record = reinterpret_cast<const NkmBaseRecord *>(nkmBaseGetRecord(entry->data.id));
                for (s32 slot = 0; slot < 8; ++slot) {
                    const SkillDataRecord *skill = skillDataFindById(record->skills[slot]);
                    if (skill != NULL && skill->sort.category == 3) {
                        scrSetResult(1);
                        return 1;
                    }
                }
            }
        }
    }
    scrSetResult(0);
    return 1;
}
}
