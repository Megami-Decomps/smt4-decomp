#include "battle/btlScript.h"
#include "battle/BattleUnitSlot.h"

extern "C" {

typedef struct UnitSlot {
    /* 0x00 */ u8 unk00[0xBE];
    /* 0xBE */ u16 mode;
    /* 0xC0 */ u16 arg;
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

/* Script command: queues command 8 with the script's argument on the script unit's slot. */
u32 FUN_00372904(void)
{
    s32 arg = scrGetArg(0);
    UnitSlot *slot = &reinterpret_cast<Unit *>(btlUnitGet(reinterpret_cast<BtlMainStateA *const *>(g_btlScriptUnit)))->data->slot;

    slot->mode = 8;
    slot->arg = arg;
    return 1;
}

} /* extern "C" */
