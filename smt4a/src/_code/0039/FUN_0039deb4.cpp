#include "common.h"

extern "C" {

typedef struct Unit {
    /* 0x00 */ u8 unk00[0x1D0];
} Unit;

typedef struct MainState {
    /* 0x0000 */ u8 unk0000[0x1ED4];
    /* 0x1ED4 */ Unit *units;
} MainState;

extern u32 g_btlScriptUnit;

s32 scrGetArg(u32 index);
u32 btlUnitGet(u32 unit);
MainState *btlGetMainState(void);
int FUN_004fe5dc(s32 a, u32 caster, Unit *target, s32 b);

/* Script command: runs FUN_004fe5dc from the script unit on the unit given by argument 0. */
u32 FUN_0039deb4(void)
{
    s32 index = scrGetArg(0);
    u32 caster = btlUnitGet(g_btlScriptUnit);

    FUN_004fe5dc(0, caster, &btlGetMainState()->units[index], 1);
    return 1;
}

} /* extern "C" */
