#include "shard/W4_Match6_BtlEntry.h"
#include "gamedata/Table04Record.h"
#include "shard/W6_W6Match2_RankedTableRecord.h"

struct BattleItemSkillRecordView {
    u8 unk00[0x62];
    u16 skill;
};

extern "C" {
Table04Record *FUN_002ae164(s32 id);
BattleItemSkillRecordView *dataTable08Sub1GetRecord(s32 id);
}


extern "C" u32 btlEntryHasActionSkillCategory(const BtlEntry *entry, u32 category)
{
    if (entry->flags & 0x10) {
        if (entry->actionList.selected.kind == 2 || entry->actionList.selected.kind == 3) {
            const Table04Record *skill = FUN_002ae164(entry->actionList.selected.id);
            if (skill && category == skill->skillProperties.category)
                return 1;
        }
        if (entry->actionList.selected.kind == 8) {
            const BattleItemSkillRecordView *item = dataTable08Sub1GetRecord(entry->actionList.selected.id);
            if (item && item->skill) {
                const Table04Record *skill = FUN_002ae164(item->skill);
                if (skill && category == skill->skillProperties.category)
                    return 1;
            }
        }
    } else {
        for (s32 i = 0; i < 5; ++i) {
            if (entry->actionList.available[i].kind == 2 || entry->actionList.available[i].kind == 3) {
                const Table04Record *skill = FUN_002ae164(entry->actionList.available[i].id);
                if (skill && category == skill->skillProperties.category)
                    return 1;
            }
            if (entry->actionList.available[i].kind == 8) {
                const BattleItemSkillRecordView *item = dataTable08Sub1GetRecord(entry->actionList.available[i].id);
                if (item && item->skill) {
                    const Table04Record *skill = FUN_002ae164(item->skill);
                    if (skill && category == skill->skillProperties.category)
                        return 1;
                }
            }
            if (entry->actionList.available[i].kind == 1 && entry->actionList.available[i].id == 2 && entry->equipA) {
                const RankedTableRecord *weapon = dataTable08Sub2GetRecord(entry->equipA->weapon.id);
                if (weapon && category == rankedTableRecordGetSortFlags(weapon) >> 20)
                    return 1;
            }
        }
    }
    return 0;
}
