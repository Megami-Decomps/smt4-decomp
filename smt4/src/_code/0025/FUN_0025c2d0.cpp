#include "battle/btlUI.h"

extern "C" {

extern BtlUiGlobals DAT_00439c88;

void FUN_0025c2d0(u32 unused, u8 value)
{
    DAT_00439c88.ui->unk54DC = value;
}

} /* extern "C" */
