#include "common.h"

struct Params0035e9d0 {
    /* 0x000 */ u8 unk000[0x1be];
    /* 0x1be */ u16 value;
};

struct Unit0035e9d0 {
    /* 0x00 */ u8 unk00[0x28];
    /* 0x28 */ Params0035e9d0 *params;
};

extern "C" {

extern u32 g_btlScriptUnit;

Unit0035e9d0 *btlUnitGet(u32 unit);

/* Script command: sets the script unit's parameter halfword at 0x1be to six. */
s32 FUN_0035e9d0(void)
{
    Unit0035e9d0 *unit = btlUnitGet(g_btlScriptUnit);
    Params0035e9d0 *params = unit->params;
    params->value = 6;
    return 1;
}

} /* extern "C" */
