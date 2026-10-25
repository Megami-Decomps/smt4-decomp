#include "battle/BattleUnitSlot.h"
#include "script/ScriptArgs.h"

extern "C" {

typedef struct UnitStatus {
    /* 0x000 */ u8 unk000[0x126];
    /* 0x126 */ u16 slots[16];        /* top 6 bits: state */
} UnitStatus;

typedef struct BattleUnit {
    /* 0x00 */ u8 unk00[0x28];
    /* 0x28 */ UnitStatus *status;
} BattleUnit;

extern u32 g_btlScriptUnit;

/* Script command: sets the result to whether the next argument of the script unit's status is in state 4 (bits 10-15). */
u32 scrCommBtlUnitSlotStateIs4(void)
{
    s32 slot = scrGetArg(0);

    BattleUnit *unit = reinterpret_cast<BattleUnit *>(btlUnitGet(reinterpret_cast<BtlState *const *>(g_btlScriptUnit)));
    // The slot words start at halfword 0x93 (byte 0x126) of the status block.
    const u16 *words = reinterpret_cast<const u16 *>(unit->status);
    scrSetResult((words[0x93 + slot] >> 10) == 4);
    return 1;
}

} /* extern "C" */
