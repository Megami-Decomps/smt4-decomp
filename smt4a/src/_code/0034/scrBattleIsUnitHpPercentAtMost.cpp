#include "battle/btlScript.h"
#include "common.h"

extern "C" {

typedef struct HpPair {
    /* 0x0 */ s32 current;
    /* 0x4 */ s32 max;
} HpPair;

typedef struct UnitStats {
    /* 0x000 */ u8 unk000[2];
    /* 0x002 */ u16 form;
    /* 0x004 */ u8 unk004[0xF0];
    /* 0x0F4 */ HpPair hp;
} UnitStats;

typedef struct UnitCounters {
    /* 0x000 */ u8 unk000[0x3B4];
    /* 0x3B4 */ s32 count;
} UnitCounters;

typedef struct Unit {
    /* 0x00 */ u8 unk00[0x20];
    /* 0x20 */ UnitCounters *counters;
    /* 0x24 */ u8 unk24[4];
    /* 0x28 */ UnitStats *stats;
} Unit;

s32 scrGetArg(u32 index);
Unit *btlUnitGet(u32 unit);
int scrSetResult(bool value);

/* Script command: result is whether the unit's current/max percentage is at most the argument
 * (always false for form 0x323 once its counter reaches 5). */
u32 scrBattleIsUnitHpPercentAtMost(void)
{
    s32 threshold = scrGetArg(0);
    UnitStats *stats = btlUnitGet(g_btlScriptUnit)->stats;

    if (stats->form == 0x323 && btlUnitGet(g_btlScriptUnit)->counters->count >= 5) {
        scrSetResult(false);
        return 1;
    }
    s32 current = stats->hp.current;
    s32 max = stats->hp.max;

    scrSetResult(current * 100 / max <= threshold);
    return 1;
}

} /* extern "C" */
