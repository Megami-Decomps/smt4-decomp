#include "common.h"

extern "C" {

typedef struct UnitStats {
    /* 0x000 */ u8 unk000[0x126];
    /* 0x126 */ u16 skills[1];
} UnitStats;

typedef struct BtlUnit {
    /* 0x00 */ u8 unk00[0x28];
    /* 0x28 */ UnitStats *stats;
} BtlUnit;

extern u32 g_btlScriptUnit;

extern BtlUnit *btlUnitGet(u32 unit);
extern void scrSetResult(s32 value);
extern s32 scrGetArg(void);

/* Script command: pushes whether bits 10.. of the script unit's u16 entry (argument 0) equal 2; returns 1. */
u32 FUN_002f0780(void)
{
    s32 index = scrGetArg();

    UnitStats *stats = btlUnitGet(g_btlScriptUnit)->stats;

    scrSetResult(stats->skills[index] >> 10 == 2);
    return 1;
}

} /* extern "C" */
