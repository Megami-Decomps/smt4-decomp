#include "battle/btlUI.h"

extern "C" {

void FUN_003a9ef8(BtlUiObjCA *obj);

extern BtlUiGlobalsA DAT_0057a9b8;

void FUN_004abde4(void)
{
    FUN_003a9ef8(&DAT_0057a9b8.ui->objC);
}

} /* extern "C" */
