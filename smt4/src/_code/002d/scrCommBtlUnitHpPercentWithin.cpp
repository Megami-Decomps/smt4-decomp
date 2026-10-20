/* NON_MATCHING: register allocation only: retail loads the constant 100 into r0 after the two halfword loads (smulbb r0,r2,r0); built keeps it in r2 beforehand. */
#include "common.h"

extern "C" {

typedef struct UnitStats {
    /* 0x00 */ u8 unk00[0xEC];
    /* 0xEC */ s16 hp;
    /* 0xEE */ s16 maxHp;
} UnitStats;

typedef struct BtlUnit {
    /* 0x00 */ u8 unk00[0x28];
    /* 0x28 */ UnitStats *stats;
} BtlUnit;

extern u32 g_btlScriptUnit;

extern BtlUnit *btlUnitGet(u32 unit);
extern s32 scrGetArg(void);
extern void scrSetResult(s32 value);

/* Script command: pushes whether the script unit's HP percentage is at most argument 0; returns 1. */
s32 scrCommBtlUnitHpPercentWithin(void)
{
    s32 limit = scrGetArg();
    UnitStats *stats = btlUnitGet(g_btlScriptUnit)->stats;

    scrSetResult(stats->hp * 100 / stats->maxHp <= limit);
    return 1;
}

} /* extern "C" */
