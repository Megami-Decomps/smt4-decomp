#include "shard/W4_Match6_BtlEntry.h"
#include "gamedata/SkillDataRecord.h"
#include "shard/W6_W6Match2_RankedTableRecord.h"
#include "gamedata/SkillDataLookup.h"
#include "gamedata/EquipmentRecord.h"
#include "gamedata/ConsumableRecord.h"

extern "C" {
}

extern "C" u32 btlEntryHasActionSkillCategory(const BtlEntry *entry, u32 category)
{
    if (entry->flags & 0x10) {
        if (entry->actionList.selected.kind == 2 || entry->actionList.selected.kind == 3) {
            const SkillDataRecord *skill = skillDataFindById(entry->actionList.selected.id);
            if (skill && category == skill->skillProperties.category)
                return 1;
        }
        if (entry->actionList.selected.kind == 8) {
            const ConsumableRecord *item = itemTableGetItemRecord(entry->actionList.selected.id);
            if (item && item->skillId) {
                const SkillDataRecord *skill = skillDataFindById(item->skillId);
                if (skill && category == skill->skillProperties.category)
                    return 1;
            }
        }
    } else {
        for (s32 i = 0; i < 5; ++i) {
            if (entry->actionList.available[i].kind == 2 || entry->actionList.available[i].kind == 3) {
                const SkillDataRecord *skill = skillDataFindById(entry->actionList.available[i].id);
                if (skill && category == skill->skillProperties.category)
                    return 1;
            }
            if (entry->actionList.available[i].kind == 8) {
                const ConsumableRecord *item = itemTableGetItemRecord(entry->actionList.available[i].id);
                if (item && item->skillId) {
                    const SkillDataRecord *skill = skillDataFindById(item->skillId);
                    if (skill && category == skill->skillProperties.category)
                        return 1;
                }
            }
            if (entry->actionList.available[i].kind == 1 && entry->actionList.available[i].id == 2 && entry->equipA) {
                const EquipmentRecord *weapon = itemTableGetEquipmentRecord(entry->equipA->weapon.id);
                if (weapon && category == weapon->traits >> 20)
                    return 1;
            }
        }
    }
    return 0;
}
