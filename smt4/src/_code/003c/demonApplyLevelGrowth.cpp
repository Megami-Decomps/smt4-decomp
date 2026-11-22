/* NON_MATCHING: 121 lines. The growth parameters are demonGetGrowthParameters' body inlined (built in registers and
 * stored as four words, as in retail); the callees are saveIsRecordValueBounded and gameRecordSetValueClamped. The
 * rest is that body's scheduling (see demonGetGrowthParameters; retail also spills more and keeps a 60-byte frame), and
 * the order of the stat bonus loads and stores. */
#include "common.h"
#include "gamedata/NkmBaseRecord.h"
#include "gamedata/GameDataAccess.h"
#include "gamedata/DemonGrowthParameters.h"

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
typedef char DemonLevelWorkSizeCheck[sizeof(DemonLevelWork) == 0x4a ? 1 : -1];

extern "C" {
u32 unitRollGrowthStat(DemonLevelWork *work, StatGrowthParametersIV *parameters, u32 flags);
u32 saveIsRecordValueBounded(u32 index);
u32 gameRecordSetValueClamped(u32 recordIndex, u32 value);
void unitRecalculateEffectiveStats(DemonLevelWork *work);
}

extern "C" void demonApplyLevelGrowth(DemonLevelWork *work, s32 levels)
{
    if (levels <= 0)
        return;

    StatGrowthParametersIV parameters;
    demonGrowthParametersIV(work->id, &parameters);

    for (s32 level = 0; level < levels; ++level) {
        if (work->level == 99)
            break;
        for (s32 point = 0; point < 5; ++point) {
            switch (unitRollGrowthStat(work, &parameters, 1)) {
            case 0: ++work->gains[0]; break;
            case 1: ++work->gains[1]; break;
            case 2: ++work->gains[2]; break;
            case 3: ++work->gains[3]; break;
            case 4: ++work->gains[4]; break;
            }
        }
        if (flagBitIsSet(7) && work->base[2] < 999) {
            ++work->base[2];
            ++work->gains[0];
        }
        if (flagBitIsSet(8) && work->base[5] < 999) {
            ++work->base[5];
            ++work->gains[3];
        }
        if (flagBitIsSet(9) && work->base[6] < 999) {
            ++work->base[6];
            ++work->gains[4];
        }
        if (flagBitIsSet(10) && work->base[4] < 999) {
            ++work->base[4];
            ++work->gains[2];
        }
        if (flagBitIsSet(11) && work->base[3] < 999) {
            ++work->base[3];
            ++work->gains[1];
        }
        ++work->levelsGained;
        ++work->level;
        gameRecordSetValueClamped(work->id, saveIsRecordValueBounded(work->id) + 50);
    }
    unitRecalculateEffectiveStats(work);
    work->hp = work->effective[0];
    work->pending = 0;
    work->mp = work->effective[1];
}
