/* NON_MATCHING: retail keeps the constant 1 in r5 across the scrSetResult call (shared by the shift and the return value); built rematerialises it */
#include "battle/BattleUnitSlot.h"
#include "script/ScriptArgs.h"

extern "C" {

typedef struct UnitStats002f0688 {
    /* 0x00 */ u8 unk00[0xfa];
    /* 0xfa */ u16 flags;
} UnitStats002f0688;

typedef struct BtlUnit002f0688 {
    /* 0x00 */ u8 unk00[0x28];
    /* 0x28 */ UnitStats002f0688 *stats;
} BtlUnit002f0688;

extern u32 g_btlScriptUnit;


/* Script command: reports whether bit (script argument 0) of the script unit's flag halfword is set. Returns 1. */
u32 FUN_002f0688(void)
{
    u32 bit = scrGetArg(0);
    UnitStats002f0688 *stats = reinterpret_cast<BtlUnit002f0688 *>(btlUnitGet(reinterpret_cast<BtlMainState *const *>(g_btlScriptUnit)))->stats;

    scrSetResult((stats->flags & (1 << bit)) != 0);
    return 1;
}

} /* extern "C" */
