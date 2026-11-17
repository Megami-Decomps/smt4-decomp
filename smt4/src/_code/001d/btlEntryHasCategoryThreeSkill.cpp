#include "shard/W4_Match6_BtlEntry.h"
#include "gamedata/SkillDataRecord.h"
#include "gamedata/NkmBaseRecord.h"
#include "gamedata/SkillDataLookup.h"

extern "C" u32 btlEntryHasCategoryThreeSkill(const BtlEntry *entry)
{
    if (entry->equipA != NULL) {
        for (s32 i = 0; i < 8; ++i) {
            const SkillDataRecord *skill = skillDataFindById(entry->equipA->items[i]);
            if (skill != NULL && skill->sort.category == 3) {
                return 1;
            }
        }
    }
    if (entry->equipB != NULL) {
        for (s32 i = 0; i < 8; ++i) {
            const SkillDataRecord *skill = skillDataFindById(entry->equipB->items[i]);
            if (skill != NULL && skill->sort.category == 3) {
                return 1;
            }
        }
    }
    if (entry->devil != NULL) {
        struct DemonSkillView {
            u8 prefix[0x3C];
            u16 skills[8];
        };
        typedef char SkillsOffsetCheck[offsetof(DemonSkillView, skills) == 0x3C ? 1 : -1];
        const DemonSkillView *demon = reinterpret_cast<const DemonSkillView *>(nkmBaseGetRecord(entry->id));
        for (s32 i = 0; i < 8; ++i) {
            const SkillDataRecord *skill = skillDataFindById(demon->skills[i]);
            if (skill != NULL && skill->sort.category == 3) {
                return 1;
            }
        }
    }
    return 0;
}
