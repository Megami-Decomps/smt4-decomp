#include "common.h"

extern "C" {

typedef struct UnitStats {
    /* 0x00 */ u8 unk00[0xFC];
    /* 0xFC */ s32 current;
    /* 0x100 */ s32 max;
} UnitStats;

typedef struct Unit {
    /* 0x00 */ u8 unk00[0x28];
    /* 0x28 */ UnitStats *stats;
} Unit;

extern u32 g_btlScriptUnit;

s32 scrGetArg(void);
Unit *btlUnitGet(u32 unit);
int scrSetResult(bool value);

/* Script command: result is whether the unit's current/max percentage is at most the script argument. */
u32 scrUnitPercentAtMost(void)
{
    s32 threshold = scrGetArg();
    UnitStats *stats = btlUnitGet(g_btlScriptUnit)->stats;

    s32 current = stats->current;
    s32 max = stats->max;

    scrSetResult(current * 100 / max <= threshold);
    return 1;
}

} /* extern "C" */
