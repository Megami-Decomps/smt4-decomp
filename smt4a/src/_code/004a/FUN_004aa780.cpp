#include "battle/BtlUiGlobal.h"
#include "shard/X14_BtlUiClose.h"

extern "C" {


void FUN_004aa780(BtlUiA *unused, u8 value)
{
    g_btlUi.ui->unk6174 = value;
}

} /* extern "C" */
