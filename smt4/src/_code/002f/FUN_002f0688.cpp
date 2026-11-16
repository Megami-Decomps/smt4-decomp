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

/* Sets the script result; commands then report 1 (done). */
static u32 commandResult(s32 value)
{
    scrSetResult(value);
    return 1;
}


/* Script command: reports whether bit (script argument 0) of the script unit's flag halfword is set. Returns 1. */
u32 FUN_002f0688(void)
{
    u32 bit = scrGetArg(0);
    UnitStats002f0688 *stats = reinterpret_cast<BtlUnit002f0688 *>(btlUnitGet(reinterpret_cast<BtlMainState *const *>(g_btlScriptUnit)))->stats;

    return commandResult((stats->flags & (1 << bit)) != 0);
}

} /* extern "C" */
