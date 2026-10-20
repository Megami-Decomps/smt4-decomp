#include "common.h"

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

extern u32 g_btlScriptUnit;

s32 scrGetArg(void);
Unit *btlUnitGet(u32 unit);

/* Script command: sets the script unit's slot to mode 2 with the script's argument. */
u32 FUN_002e3b34(void)
{
    s32 arg = scrGetArg();
    UnitSlot *slot = &btlUnitGet(g_btlScriptUnit)->data->slot;

    slot->mode = 2;
    slot->arg = arg;
    return 1;
}

} /* extern "C" */
