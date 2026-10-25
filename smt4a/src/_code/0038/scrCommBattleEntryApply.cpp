#include "battle/btlMain.h"

extern "C" {

void btlReflectCreateKind37(s32 mode, u32 unit, u8 *entry, s32 flag);
s32 scrGetArg(u32 index);
u32 btlUnitGet(u32 unit);
BtlMainStateA *btlGetMainState(void);

extern u32 g_btlScriptUnit; /* 0x57113c */

/* Script command: runs btlReflectCreateKind37 on battle entry arg0 (0x1d0 bytes each) for the script's unit. */
u32 scrCommBattleEntryApply(void)
{
    s32 index = scrGetArg(0);
    u32 unit = btlUnitGet(g_btlScriptUnit);

    btlReflectCreateKind37(0, unit, (u8 *)btlGetMainState()->unk1ED4 + index * 0x1d0, 0);
    return 1;
}

} /* extern "C" */
