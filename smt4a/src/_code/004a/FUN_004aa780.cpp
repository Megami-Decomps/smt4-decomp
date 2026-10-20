#include "battle/btlUI.h"

extern "C" {

extern BtlUiGlobalsA g_btlUi;

void FUN_004aa780(u32 unused, u8 value)
{
    g_btlUi.ui->unk6174 = value;
}

} /* extern "C" */
