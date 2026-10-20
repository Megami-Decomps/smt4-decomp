#include "battle/btlUI.h"

extern "C" {

extern BtlUiGlobalsA DAT_0057a9b8;

bool FUN_004aba9c(void)
{
    return DAT_0057a9b8.ui->state != 0x10 && DAT_0057a9b8.ui->state != 0xC;
}

} /* extern "C" */
