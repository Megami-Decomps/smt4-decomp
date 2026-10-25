/* NON_MATCHING: growth parameters initialize with byte/halfword stores rather than retail's packed-register construction and spill layout. */
#include "common.h"
#include "shard/flagBitIsSet.h"

struct DemonGrowthRecord {
    /* 0x00 */ u16 id;
    /* 0x02 */ u8 race, level;
    /* 0x04 */ u8 unk04[0x10];
    /* 0x14 */ u16 baseHp, baseMp;
    /* 0x18 */ u8 hpGrowth, mpGrowth;
    /* 0x1A */ u8 unk1a[0xa];
    /* 0x24 */ u8 weights[5];
};
struct LevelGrowthParameters {
    /* 0x00 */ u8 weights[5];
    /* 0x05 */ u8 reserved;
    /* 0x06 */ u16 baseHp;
    /* 0x08 */ u16 baseMp;
    /* 0x0A */ u8 hpGrowth, mpGrowth;
    /* 0x0C */ u16 hp, mp;
};
struct DemonLevelWork {
    /* 0x00 */ s16 base[7];
    /* 0x0E */ s16 effective[7];
    /* 0x1C */ u8 unk1c[4];
    /* 0x20 */ u16 gains[5];
    /* 0x2A */ u16 hp, mp;
    /* 0x2E */ u8 unk2e[0x16];
    /* 0x44 */ u16 pending;
    /* 0x46 */ u16 id;
    /* 0x48 */ u8 level, levelsGained;
};
typedef char LevelGrowthParametersSizeCheck[sizeof(LevelGrowthParameters) == 0x10 ? 1 : -1];
typedef char DemonLevelWorkSizeCheck[sizeof(DemonLevelWork) == 0x4a ? 1 : -1];

extern "C" {
DemonGrowthRecord *devilGetRecord(u16 id);
u32 FUN_003c219c(DemonLevelWork *work, LevelGrowthParameters *parameters, u32 flags);
s32 FUN_00245768(u32 id);
void FUN_0024571c(u32 id, s32 value);
void unitRecalculateEffectiveStats(DemonLevelWork *work);
}

static inline void applyDemonGrowthBonus(DemonLevelWork *work, u32 flag, u32 stat)
{
    if (flagBitIsSet(flag) && work->base[stat + 2] < 999) {
        ++work->base[stat + 2];
        ++work->gains[stat];
    }
}

extern "C" void demonApplyLevelGrowth(DemonLevelWork *work, s32 levels)
{
    if (levels <= 0)
        return;

    DemonGrowthRecord *record = devilGetRecord(work->id);
    LevelGrowthParameters parameters = {
        {record->weights[0], record->weights[1], record->weights[2], record->weights[3], record->weights[4]},
        0, record->baseHp, record->baseMp, record->hpGrowth, record->mpGrowth, 0, 0
    };
    s32 hp = record->baseHp + record->level * record->hpGrowth;
    if (hp > 9999)
        hp = 9999;
    parameters.hp = hp;
    s32 mp = (record->baseMp + record->level * record->mpGrowth) * 45 / 100;
    if (mp > 9999)
        mp = 9999;
    parameters.mp = mp;

    for (s32 level = 0; level < levels; ++level) {
        if (work->level == 99)
            break;
        for (s32 point = 0; point < 5; ++point) {
            switch (FUN_003c219c(work, &parameters, 1)) {
            case 0: ++work->gains[0]; break;
            case 1: ++work->gains[1]; break;
            case 2: ++work->gains[2]; break;
            case 3: ++work->gains[3]; break;
            case 4: ++work->gains[4]; break;
            }
        }
        applyDemonGrowthBonus(work, 7, 0);
        applyDemonGrowthBonus(work, 8, 3);
        applyDemonGrowthBonus(work, 9, 4);
        applyDemonGrowthBonus(work, 10, 2);
        applyDemonGrowthBonus(work, 11, 1);
        ++work->levelsGained;
        ++work->level;
        FUN_0024571c(work->id, FUN_00245768(work->id) + 50);
    }
    unitRecalculateEffectiveStats(work);
    work->hp = work->effective[0];
    work->pending = 0;
    work->mp = work->effective[1];
}
