#include "shard/W4_Match6_BtlEntry.h"
#include "battle/btlMain.h"
#include "shard/PassiveSkill.h"
#include "gamedata/DevilRecord.h"
#include "battle/BtlMainAccess.h"
#include "gamedata/DataTable40.h"

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
            (entry->flags & BTL_ENTRY_FLAG_BLOCKED) == 0 && entry->id == id) {
            if (entry->equipA != NULL) {
                for (s32 slot = 0; slot < 8; ++slot) {
                    const ActiveSkillRecord *skill = reinterpret_cast<const ActiveSkillRecord *>(dataTable40FindById(entry->equipA->skillIds[slot]));
                    if (skill != NULL && skill->classification.category == 3) {
                        scrSetResult(1);
                        return 1;
                    }
                }
            }
            if (entry->equipB != NULL) {
                for (s32 slot = 0; slot < 8; ++slot) {
                    const ActiveSkillRecord *skill = reinterpret_cast<const ActiveSkillRecord *>(dataTable40FindById(entry->equipB->skillIds[slot]));
                    if (skill != NULL && skill->classification.category == 3) {
                        scrSetResult(1);
                        return 1;
                    }
                }
            }
            if (entry->devil != NULL) {
                const DevilRecord *record = reinterpret_cast<const DevilRecord *>(devilGetRecord(entry->id));
                for (s32 slot = 0; slot < 8; ++slot) {
                    const ActiveSkillRecord *skill = reinterpret_cast<const ActiveSkillRecord *>(dataTable40FindById(record->skillList.ids[slot]));
                    if (skill != NULL && skill->classification.category == 3) {
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
