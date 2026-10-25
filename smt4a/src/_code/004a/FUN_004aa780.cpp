#include "battle/btlUI.h"
#include "shard/X14_BtlUiClose.h"

extern "C" {

extern BtlUiGlobalsA g_btlUi;

void FUN_004aa780(u32 unused, u8 value)
{
    g_btlUi.ui->unk6174 = value;
}

} /* extern "C" */
