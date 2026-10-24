#include "common.h"

struct Params0034e51c {
    /* 0x00 */ u8 unk00[0xf4];
    /* 0xf4 */ s32 value;
};

struct Unit0034e51c {
    /* 0x00 */ u8 unk00[0x28];
    /* 0x28 */ Params0034e51c *params;
};

extern "C" {

extern u32 g_btlScriptUnit;

Unit0034e51c *btlUnitGet(u32 unit);
s32 scrSetResult(s32 value);

/* Script command: returns the script unit's parameter block value at 0xf4. */
s32 FUN_0034e51c(void)
{
    scrSetResult(btlUnitGet(g_btlScriptUnit)->params->value);
    return 1;
}

} /* extern "C" */
