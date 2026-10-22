/* NON_MATCHING: growth-parameter initialization uses byte/halfword stores instead of retail's packed register construction. */
#include "common.h"

struct LevelGrowthTableEntry {
    /* 0x00 */ u8 unk00[5];
    /* 0x05 */ u8 weights[5];
    /* 0x0A */ u8 baseHp;
    /* 0x0B */ u8 baseMp;
    /* 0x0C */ u8 hpGrowth;
    /* 0x0D */ u8 mpGrowth;
};
struct LevelGrowthParameters {
    /* 0x00 */ u8 weights[5];
    /* 0x05 */ u8 reserved;
    /* 0x06 */ u16 baseHp;
    /* 0x08 */ u16 baseMp;
    /* 0x0A */ u8 hpGrowth;
    /* 0x0B */ u8 mpGrowth;
    /* 0x0C */ u16 hp;
    /* 0x0E */ u16 mp;
};
struct LevelGrowthStats {
    /* 0x00 */ u16 values[7];
    /* 0x0E */ u16 maxHp;
    /* 0x10 */ u16 maxMp;
};
struct LevelGrowthUnit {
    /* 0x00 */ u8 unk00[0xe];
    /* 0x0E */ LevelGrowthStats base;
    /* 0x20 */ u8 unk20[0xa];
    /* 0x2A */ u16 hp;
    /* 0x2C */ u16 mp;
    /* 0x2E */ u8 unk2e[0x44];
    /* 0x72 */ u16 pending;
    /* 0x74 */ u8 unk74[2];
    /* 0x76 */ u8 level;
};

extern "C" void *dataTableGet(u32 table, u32 subtable);
extern "C" u32 dataTableGetCount(void *table);
extern "C" LevelGrowthTableEntry *dataTableGetEntries(void *table);
extern "C" u32 FUN_003c219c(LevelGrowthStats *stats, LevelGrowthParameters *parameters, u32 flags);
extern "C" void FUN_0026e630(u32 value);
extern "C" void FUN_00299370(u32 value);

/* Apply up to the requested levels, optionally granting five growth points per level. */
extern "C" void unitApplyLevelGrowth(LevelGrowthUnit *unit, s32 levels, bool growStats)
{
    if (levels <= 0)
        return;
    void *table = dataTableGet(9, 0);
    dataTableGetCount(table);
    LevelGrowthTableEntry *entry = dataTableGetEntries(table);
    LevelGrowthParameters parameters = {
        {entry->weights[0], entry->weights[1], entry->weights[2], entry->weights[3], entry->weights[4]},
        0, entry->baseHp, entry->baseMp, entry->hpGrowth, entry->mpGrowth, 0, 0
    };
    for (s32 level = 0; level < levels; ++level) {
        if (unit->level == 99)
            break;
        if (growStats) {
            for (s32 point = 0; point < 5; ++point)
                FUN_003c219c(&unit->base, &parameters, 0);
        }
        ++unit->level;
        FUN_0026e630(10);
    }
    FUN_00299370(0);
    unit->hp = unit->base.maxHp;
    unit->mp = unit->base.maxMp;
    unit->pending = 0;
}
