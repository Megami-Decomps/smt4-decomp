#include "battle/btlScript.h"
#include "common.h"

extern "C" {

typedef struct Unit {
    /* 0x000 */ u8 unk000[0x114];
} Unit;

typedef struct MainState {
    /* 0x0000 */ u8 unk0000[0x1E98];
    /* 0x1E98 */ Unit *units;
} MainState;

s32 scrGetArg(u32 index);
u32 btlUnitGet(u32 unit);
MainState *btlGetMainState(void);
int btlReflectCreateKind2d(s32 a, u32 caster, Unit *target, s32 b);

/* Script command: runs btlReflectCreateKind2d from the script unit on the unit given by argument 0. */
u32 FUN_002f7884(void)
{
    s32 index = scrGetArg(0);
    u32 caster = btlUnitGet(g_btlScriptUnit);

    btlReflectCreateKind2d(0, caster, &btlGetMainState()->units[index], 0);
    return 1;
}

} /* extern "C" */
