/* NON_MATCHING: the status local now keeps retail's shared constant 1 in r5 (shift base and return value); only the flag halfword loads into r1 where retail uses r0. */
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
    s32 result = 1; /* the command's status: always continue */

    scrSetResult((stats->flags & (1 << bit)) != 0);
    return result;
}

} /* extern "C" */
