#include "battle/btlUI.h"

extern "C" {

extern BtlUiGlobals g_btlUi;

void FUN_0025c2d0(u32 unused, u8 value)
{
    g_btlUi.ui->objC.unk307C = value;
}

} /* extern "C" */
