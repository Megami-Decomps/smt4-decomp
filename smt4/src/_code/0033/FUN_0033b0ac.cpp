#include "battle/btlUI.h"
#include "battle/btlScript.h"
#include "battle/BattleUnitSlot.h"

extern "C" {

void FUN_00282820(s32, u32, s32, s32, s32, s32, s32, s32);
void FUN_003ae06c(BtlUi *ui);

extern BtlUi *g_btlUiBlock;

void FUN_0033b0ac(void)
{
    u32 unit;

    FUN_003ae06c(g_btlUiBlock);
    unit = reinterpret_cast<u32>(btlUnitGet(reinterpret_cast<BtlState *const *>(g_btlScriptUnit)));
    FUN_00282820(0, unit, 0, 0, 6, 4, 6, 0);
}

} /* extern "C" */
