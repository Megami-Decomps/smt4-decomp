#include "common.h"

struct Unit003bca1c;

extern "C" {

extern u32 g_btlScriptUnit;

s32 scrGetArg(u32 index);
Unit003bca1c *btlUnitGet(u32 unit);
void FUN_004fd508(s32 first, Unit003bca1c *unit, s32 kind, s32 second, s32 flag);

/* Script command: maps the direction in argument zero (-4..4) to a kind (0 for none) and runs FUN_004fd508 on the script unit. */
s32 FUN_003bca1c(void)
{
    s32 direction = scrGetArg(0);
    s32 kind = 0;

    switch (direction) {
    case -4: kind = 23; break;
    case -3: kind = 22; break;
    case -2: kind = 21; break;
    case -1: kind = 20; break;
    case 4: kind = 19; break;
    case 3: kind = 18; break;
    case 2: kind = 17; break;
    case 1: kind = 16; break;
    }
    FUN_004fd508(0, btlUnitGet(g_btlScriptUnit), kind, 0, 1);
    return 1;
}

} /* extern "C" */
