/* NON_MATCHING: corrected master growth offset0xA0, preserved unboosted HP, widened IDs and restored switch; affinity array base/zero register lifetime still differ. */
#include "common.h"
#include "gamedata/DevilRecordA.h"
#include "font/SWin/SWin.h"
#include "gamedata/Table04Record.h"
#include "shard/W6_W6Match5_EntryCollection.h"
#include "map/lmapMain.h"

// Demon record in the party/compendium format (0x12c bytes).
struct DemonRecord {
    /* 0x00 */ u16 stat0;
    /* 0x02 */ u16 stat1;
    /* 0x04 */ u16 stat2;
    /* 0x06 */ u16 stat3;
    /* 0x08 */ u16 stat4;
    /* 0x0a */ u16 stat5;
    /* 0x0c */ u16 stat6;
    /* 0x0e */ s16 hpBase;
    /* 0x10 */ u16 mpBase;
    /* 0x12 */ u8 unk12[0x0a];
    /* 0x1c */ u16 unk1c;
    /* 0x1e */ u16 unk1e;
    /* 0x20 */ u16 curStat2;
    /* 0x22 */ u16 curStat3;
    /* 0x24 */ u16 curStat4;
    /* 0x26 */ u16 curStat5;
    /* 0x28 */ u16 curStat6;
    /* 0x2a */ s16 hpMax;
    /* 0x2c */ u16 mpMax;
    /* 0x2e */ u8 unk2e[2];
    /* 0x30 */ u32 extra;
    /* 0x34 */ u16 skills[8];
    /* 0x44 */ s8 affinityBonus[8];
    /* 0x4c */ s8 growth[18];
    /* 0x5e */ u8 unk5e[4];
    /* 0x62 */ u16 id;
    /* 0x64 */ u16 levelBase;
    /* 0x66 */ u8 slot;
    /* 0x67 */ u8 unk67[0x12c - 0x67];
};


// Saved demon entry (0x80 bytes): same fields in save order.
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
s8* gameGetSlotTable(void);
void gameItemSetFlag(u32 id, s32 value);
struct SkillRecord { u8 unk00[0x26]; u16 affinity; };
void FUN_0031f190(u32 id, s32 arg);
void FUN_004bcd90(DemonRecord* record);
s32 unitHasRankingBonus(u32 id);
void FUN_002a6894(DemonRecord* record);

// Builds a demon record for `id` in slot `slot`: kind 0/3 copies the master data, kind 1 the
// saved entry; kinds other than 3 also claim a free party slot and flag the demon as owned.
void FUN_002305d0(DemonRecord* record, u32 slot, u32 id, s32 kind)
{
    sysMemClear(record, 300);
    record->id = id;
    record->slot = slot;
    if (kind != 3) {
        s8* table = gameGetSlotTable() + 0x1c88;
        for (s32 i = 0; i < 24; i++) {
            if (table[i] < 0) {
                table[i] = slot;
                break;
            }
        }
        gameItemSetFlag((u16)id, 1);
        FUN_002854d8((u16)id, 1);
    }
    const DevilTableRecordA* info = reinterpret_cast<const DevilTableRecordA *>(FUN_00184310((u16)id));
    s16 hp = 0;
    switch (kind) {
    case 0:
    case 3:
        record->levelBase = info->header.level;
        record->stat0 = info->header.initialization.stats[0];
        record->stat1 = info->header.initialization.stats[1];
        record->stat2 = info->header.initialization.stats[3];
        record->stat4 = info->header.initialization.stats[5];
        record->stat5 = info->header.initialization.stats[6];
        record->stat6 = info->header.initialization.stats[7];
        record->stat3 = info->header.initialization.stats[4];
        record->unk1c = 0;
        record->unk1e = 0;
        record->curStat2 = info->header.initialization.stats[3];
        record->curStat4 = info->header.initialization.stats[5];
        record->curStat5 = info->header.initialization.stats[6];
        record->curStat6 = info->header.initialization.stats[7];
        record->curStat3 = info->header.initialization.stats[4];
        for (s32 i = 0; i < 8; i++) record->skills[i] = info->initializationSkills[i];
        __aeabi_memcpy4(record->growth, info->categoryModifiers.values, 18);
        if (record != NULL && record->id != 0 && FUN_00184310(record->id) != NULL) {
            for (s32 i = 0; i < 8; i++) {
                if (record->skills[i] == 0) continue;
                SkillRecord *skill = (SkillRecord *)dataTable04FindById(record->skills[i]);
                if (skill == NULL || skill->affinity >= 18) continue;
                s8 sum = record->growth[skill->affinity] + record->affinityBonus[i];
                record->affinityBonus[i] = sum;
                if (sum > 9) record->affinityBonus[i] = 9;
                else if (sum < -9) record->affinityBonus[i] = -9;
            }
        }
        FUN_0031f190((u16)id, 0);
        break;
    case 1: {
        SaveEntry save;
        gameDataCopySaveEntry((u16)id, &save);
        record->levelBase = save.level;
        record->stat0 = save.stat0;
        record->stat1 = save.stat1;
        record->stat2 = save.stat2;
        record->stat4 = save.stat4;
        record->stat5 = save.stat5;
        record->stat6 = save.stat6;
        record->unk1c = 0;
        record->unk1e = 0;
        record->stat3 = save.stat3;
        record->curStat2 = save.curStat2;
        record->curStat4 = save.curStat4;
        record->curStat5 = save.curStat5;
        record->curStat6 = save.curStat6;
        record->curStat3 = save.curStat3;
        for (s32 i = 0; i < 8; i++) record->skills[i] = save.skills[i];
        record->extra = save.extra;
        *(reinterpret_cast<u8*>(record) + 299) = (save.flags >> 2) & 0xf;
        *reinterpret_cast<u64*>(record->affinityBonus) = *reinterpret_cast<u64*>(save.affinityBonus);
        __aeabi_memcpy4(record->growth, save.growth, 18);
    }
        break;
    }
    FUN_004bcd90(record);
    if (record != NULL) {
        hp = record->hpBase;
        if (unitHasRankingBonus(record->id) != 0) hp = (s16)((f32)hp * 1.25f);
    }
    record->hpMax = hp;
    record->mpMax = record->mpBase;
    FUN_002a6894(record);
}

} /* extern "C" */
