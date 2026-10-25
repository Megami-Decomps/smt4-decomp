/* NON_MATCHING: retail adds the scaled index and then 0x100 plus a #0x26 displacement; built loads 0x126 from a literal and adds it to the index */
#include "battle/BattleUnitSlot.h"

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
extern s32 scrGetArg(s32 index);
extern void scrSetResult(s32 result);

/* Script command: sets the result to whether the next argument of the script unit's status is in state 4 (bits 10-15). */
u32 scrCommBtlUnitSlotStateIs4(void)
{
    s32 slot = scrGetArg(0);

    scrSetResult((reinterpret_cast<BattleUnit *>(btlUnitGet(reinterpret_cast<BtlState *const *>(g_btlScriptUnit)))->status->slots[slot] >> 10) == 4);
    return 1;
}

} /* extern "C" */
