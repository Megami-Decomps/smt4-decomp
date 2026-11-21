#include "common.h"
#include "gamedata/PlayerGrowthDefaults.h"

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

extern "C" u32 unitRollGrowthStat(LevelGrowthStats *stats, StatGrowthParametersIV *parameters, u32 flags);
extern "C" void gameSaveAddPointsClamped(u32 value);
extern "C" void playerRecalcStatsFromEquipment(u32 value);

/* Apply up to the requested levels, optionally granting five growth points per level. */
extern "C" void unitApplyLevelGrowth(LevelGrowthUnit *unit, s32 levels, bool growStats)
{
    if (levels <= 0)
        return;
    StatGrowthParametersIV parameters;
    playerGrowthParametersIV(&parameters);
    for (s32 level = 0; level < levels; ++level) {
        if (unit->level == 99)
            break;
        if (growStats) {
            for (s32 point = 0; point < 5; ++point)
                unitRollGrowthStat(&unit->base, &parameters, 0);
        }
        ++unit->level;
        gameSaveAddPointsClamped(10);
    }
    playerRecalcStatsFromEquipment(0);
    unit->hp = unit->base.maxHp;
    unit->mp = unit->base.maxMp;
    unit->pending = 0;
}
