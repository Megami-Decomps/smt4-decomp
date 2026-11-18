#include "common.h"
#include "gamedata/NkmBaseRecordA.h"
#include "font/SWin/SWin.h"
#include "gamedata/SkillDataLookup.h"
#include "shard/W6_W6Match5_EntryCollection.h"
#include "map/lmapMain.h"

#include "gamedata/SaveSlotTable.h"

// Saved demon entry (0x50 bytes): same fields in save order.
struct SaveEntry {
    u16 level;              // 0x00
    u16 stat2;              // 0x02
    u16 stat3;              // 0x04
    u16 stat4;              // 0x06
    u16 stat5;              // 0x08
    u16 stat6;              // 0x0a
    u16 curStat2;           // 0x0c
    u16 curStat3;           // 0x0e
    u16 curStat4;           // 0x10
    u16 curStat5;           // 0x12
    u16 curStat6;           // 0x14
    u8 flags;               // 0x16
    u8 unk17;
    u16 stat0;              // 0x18
    u16 stat1;              // 0x1a
    u16 skills[8];          // 0x1c
    u8 affinityBonus[8];    // 0x2c
    u8 unk34[4];
    u32 extra;              // 0x38
    s8 growth[18];          // 0x3c
};

extern "C" {

void sysMemClear(void* data, u32 size);
u8 gameItemSetFlag(u32 id, s16 value);
void FUN_0031f190(u32 id, s32 arg);
void unitRecomputeDerivedStats(SlotRecordA *record);
s32 unitHasRankingBonus(u16 id);
void FUN_002a6894(SlotRecordA *record);

/* Adds each skill's affinity growth to its affinity bonus, clamped to [-9, 9]. */
static __inline void demonApplySkillAffinities(SlotRecordA *record)
{
    if (record == NULL || record->id == 0 || nkmBaseGetRecord(record->id) == NULL)
        return;
    for (s32 i = 0; i < 8; i++) {
        if (record->skills[i] == 0) continue;
        const SkillDataRecordA *skill = skillDataFindById(record->skills[i]);
        if (skill != NULL && skill->sort.rankCategory < 18) {
            u32 affinity = skill->sort.rankCategory;
            s8 sum = record->categoryRanks[affinity] + record->skillRanks[i];
            record->skillRanks[i] = sum;
            if (sum > 9) record->skillRanks[i] = 9;
            else if (sum < -9) record->skillRanks[i] = -9;
        }
    }
}

// The same maximum accessor used when building a unit from its table record.
static __inline s32 scaledHpForRecord(const SlotRecordA *record)
{
    if (record == NULL) {
        return 0;
    }
    s16 hp = record->maxHp;
    if (unitHasRankingBonus(record->id)) {
        hp = static_cast<s16>(hp * 1.25f);
    }
    return hp;
}

// Builds a demon record for `id` in slot `slot`: kind 0/3 copies the master data, kind 1 the
// saved entry; kinds other than 3 also claim a free party slot and flag the demon as owned.
void demonRecordInitialize(SlotRecordA *record, u32 slot, u32 id, s32 kind)
{
    sysMemClear(record, sizeof(*record));
    record->id = id;
    record->tableIndex = slot;
    if (kind != 3) {
        s8 *table = gameGetSlotTable()->party;
        for (s32 i = 0; i < 24; i++) {
            if (table[i] < 0) {
                table[i] = slot;
                break;
            }
        }
        gameItemSetFlag((u16)id, 1);
        FUN_002854d8((u16)id, 1);
    }
    const NkmBaseRecordA *info = reinterpret_cast<const NkmBaseRecordA *>(nkmBaseGetRecord((u16)id));
    switch (kind) {
    case 0:
    case 3:
        record->level = info->level;
        record->tableStats[0] = info->baseHp;
        record->tableStats[1] = info->baseMp;
        record->tableStats[2] = info->stats[0];
        record->tableStats[4] = info->stats[2];
        record->tableStats[5] = info->stats[3];
        record->tableStats[6] = info->stats[4];
        record->tableStats[3] = info->stats[1];
        record->boostedMaxHp = 0;
        record->boostedMaxMp = 0;
        record->stats[0] = info->stats[0];
        record->stats[2] = info->stats[2];
        record->stats[3] = info->stats[3];
        record->stats[4] = info->stats[4];
        record->stats[1] = info->stats[1];
        for (s32 i = 0; i < 8; i++) record->skills[i] = info->skills.ids[i];
        __aeabi_memcpy4(record->categoryRanks, info->categoryModifiers, 18);
        demonApplySkillAffinities(record);
        FUN_0031f190((u16)id, 0);
        break;
    case 1: {
        SaveEntry save;
        gameDataCopySaveEntry((u16)id, &save);
        record->level = save.level;
        record->tableStats[0] = save.stat0;
        record->tableStats[1] = save.stat1;
        record->tableStats[2] = save.stat2;
        record->tableStats[4] = save.stat4;
        record->tableStats[5] = save.stat5;
        record->tableStats[6] = save.stat6;
        record->tableStats[3] = save.stat3;
        record->boostedMaxHp = 0;
        record->boostedMaxMp = 0;
        record->stats[0] = save.curStat2;
        record->stats[2] = save.curStat4;
        record->stats[3] = save.curStat5;
        record->stats[4] = save.curStat6;
        record->stats[1] = save.curStat3;
        for (s32 i = 0; i < 8; i++) record->skills[i] = save.skills[i];
        record->experience = save.extra;
        record->status = (save.flags >> 2) & 0xf;
        *reinterpret_cast<u64*>(record->skillRanks) = *reinterpret_cast<u64*>(save.affinityBonus);
        __aeabi_memcpy4(record->categoryRanks, save.growth, 18);
        break;
    }
    }
    unitRecomputeDerivedStats(record);
    record->hp = scaledHpForRecord(record);
    record->mp = record->maxMp;
    FUN_002a6894(record);
}

} /* extern "C" */
