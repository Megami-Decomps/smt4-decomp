#include "battle/btlUI.h"

extern "C" {

void FUN_003f995c(u32 arg);

extern BtlUiGlobalsA DAT_0057a9b8;

void FUN_004ab718(void)
{
    FUN_003f995c(DAT_0057a9b8.ui->unk7488);
}

} /* extern "C" */
