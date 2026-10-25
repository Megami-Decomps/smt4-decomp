#include "battle/btlScript.h"
#include "battle/BattleUnitSlot.h"

extern "C" {

typedef struct UnitSlot {
    /* 0x00 */ u8 unk00[0x4C];
    /* 0x4C */ u16 mode;
    /* 0x4E */ u16 arg;
} UnitSlot;

typedef struct UnitData {
    /* 0x000 */ u8 unk000[0x100];
    /* 0x100 */ UnitSlot slot;
} UnitData;

typedef struct Unit {
    /* 0x00 */ u8 unk00[0x28];
    /* 0x28 */ UnitData *data;
} Unit;

s32 scrGetArg(u32 index);

/* Script command: sets the script unit's slot to mode 2 with the script's argument. */
u32 FUN_002e3b30(void)
{
    s32 arg = scrGetArg(0);
    UnitSlot *slot = &reinterpret_cast<Unit *>(btlUnitGet(reinterpret_cast<BtlMainState *const *>(g_btlScriptUnit)))->data->slot;

    slot->mode = 2;
    slot->arg = arg;
    return 1;
}

} /* extern "C" */
