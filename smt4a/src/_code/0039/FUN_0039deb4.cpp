#include "battle/BtlMainAccess.h"
#include "battle/btlScript.h"
#include "common.h"

extern "C" {

typedef struct Unit {
    /* 0x00 */ u8 unk00[0x1D0];
} Unit;

typedef struct MainState {
    /* 0x0000 */ u8 unk0000[0x1ED4];
    /* 0x1ED4 */ Unit *units;
} MainState;

s32 scrGetArg(u32 index);
u32 btlUnitGet(u32 unit);
int btlReflectCreateKind37(s32 a, u32 caster, Unit *target, s32 b);

/* Script command: runs btlReflectCreateKind37 from the script unit on the unit given by argument 0. */
u32 FUN_0039deb4(void)
{
    s32 index = scrGetArg(0);
    u32 caster = btlUnitGet(g_btlScriptUnit);

    btlReflectCreateKind37(0, caster, &reinterpret_cast<MainState *>(btlGetMainState())->units[index], 1);
    return 1;
}

} /* extern "C" */
