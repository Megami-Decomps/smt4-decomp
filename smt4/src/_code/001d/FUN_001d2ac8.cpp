/* NON_MATCHING: the first equipment skill loop exchanges its base and index-address registers. */
#include "shard/W4_Match6_BtlEntry.h"
#include "gamedata/Table04Record.h"
#include "gamedata/DevilRecord.h"
#include "gamedata/DataTable40.h"

extern "C" {
}

static inline bool isCategoryThreeSkill(u16 id)
{
    const Table04Record *skill = dataTable40FindById(id);
    return skill != NULL && skill->sort.category == 3;
}

extern "C" u32 FUN_001d2ac8(const BtlEntry *entry)
{
    if (entry->equipA != NULL) {
        for (s32 i = 0; i < 8; ++i) {
            if (isCategoryThreeSkill(entry->equipA->items[i])) return 1;
        }
    }
    if (entry->equipB != NULL) {
        for (s32 i = 0; i < 8; ++i) {
            if (isCategoryThreeSkill(entry->equipB->items[i])) return 1;
        }
    }
    if (entry->devil != NULL) {
        struct DemonSkillView {
            u8 prefix[0x3C];
            u16 skills[8];
        };
        typedef char SkillsOffsetCheck[offsetof(DemonSkillView, skills) == 0x3C ? 1 : -1];
        const DemonSkillView *demon = reinterpret_cast<const DemonSkillView *>(devilGetRecord(entry->id));
        for (s32 i = 0; i < 8; ++i) {
            if (isCategoryThreeSkill(demon->skills[i])) return 1;
        }
    }
    return 0;
}
