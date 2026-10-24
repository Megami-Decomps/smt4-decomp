#include "common.h"

extern "C" {

typedef struct UnitStats {
    /* 0x00 */ u8 unk00[0xE8];
    /* 0xE8 */ s16 hp;
    /* 0xEA */ s16 maxHp;
} UnitStats;

typedef struct BtlUnit {
    /* 0x00 */ u8 unk00[0x28];
    /* 0x28 */ UnitStats *stats;
} BtlUnit;

extern u32 g_btlScriptUnit;

static __inline s32 percentOf(s32 value, s32 total)
{
    return value * 100 / total;
}

extern BtlUnit *btlUnitGet(u32 unit);
extern void scrSetResult(s32 value);
extern s32 scrGetArg(u32 index);

/* Script command: pushes whether the script unit's HP percentage is at most argument 0; returns 1. */
u32 scrComm_BtlHpPercentAtMost(void)
{
    s32 percent = scrGetArg(0);
    UnitStats *stats = btlUnitGet(g_btlScriptUnit)->stats;

    scrSetResult(percentOf(stats->hp, stats->maxHp) <= percent);
    return 1;
}

} /* extern "C" */
