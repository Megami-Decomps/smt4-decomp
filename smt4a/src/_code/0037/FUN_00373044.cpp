#include "common.h"

extern "C" {

typedef struct UnitStats {
    /* 0x000 */ u8 unk000[0x152];
    /* 0x152 */ u16 skills[1];      /* bits 10 and up: the skill's state */
} UnitStats;

typedef struct Unit {
    /* 0x00 */ u8 unk00[0x28];
    /* 0x28 */ UnitStats *stats;
} Unit;

extern u32 g_btlScriptUnit;

s32 scrGetArg(void);
Unit *btlUnitGet(u32 unit);
int scrSetResult(bool value);

/* Script command: result is whether the state (bits 10+) of the unit's entry for the argument is 2. */
u32 FUN_00373044(void)
{
    s32 index = scrGetArg();
    UnitStats *stats = btlUnitGet(g_btlScriptUnit)->stats;

    scrSetResult(stats->skills[index] >> 10 == 2);
    return 1;
}

} /* extern "C" */
