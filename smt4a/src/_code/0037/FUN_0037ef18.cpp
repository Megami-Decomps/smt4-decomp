#include "common.h"

struct UnitData {
    /* 0x00 */ u8 unk00[0x1be];
    /* 0x1be */ s16 value;
};

struct UnitWithData {
    /* 0x00 */ u8 unk00[0x28];
    /* 0x28 */ UnitData *data;
};

extern "C" {

extern u32 g_btlScriptUnit;

UnitWithData *btlUnitGet(u32 id);

/* Script command: sets the scripted unit's halfword at 0x1be to 20. */
u32 FUN_0037ef18(void)
{
    UnitData *data = btlUnitGet(g_btlScriptUnit)->data;
    data->value = 20;
    return 1;
}

} /* extern "C" */
