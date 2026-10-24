#include "common.h"

struct UnitData {
    /* 0x00 */ u8 unk00[0x14c];
    /* 0x14c */ s16 value;
};

struct UnitWithData {
    /* 0x00 */ u8 unk00[0x28];
    /* 0x28 */ UnitData *data;
};

extern "C" {

extern u32 g_btlScriptUnit;

UnitWithData *btlUnitGet(u32 id);

/* Script command: sets the scripted unit's halfword at 0x14c to 6. */
u32 FUN_002e3b04(void)
{
    UnitData *data = btlUnitGet(g_btlScriptUnit)->data;
    data->value = 6;
    return 1;
}

} /* extern "C" */
