#include "battle/btlUI.h"

extern "C" {

extern BtlUiGlobalsA g_btlUi;

int FUN_002ae554(void *holder, s16 value);

/* Forwards `value` (as a 16-bit value) to FUN_002ae554 for the battle UI panel's holder. */
void FUN_004a9c24(u32 unused, s32 value)
{
    FUN_002ae554(&g_btlUi.ui->objC, value);
}

} /* extern "C" */
