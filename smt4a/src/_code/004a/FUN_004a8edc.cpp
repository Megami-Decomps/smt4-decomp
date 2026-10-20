#include "battle/btlUI.h"

extern "C" {

void FUN_002cd108(BtlUiObjCA *obj);

extern BtlUiGlobalsA DAT_0057a9b8;

void FUN_004a8edc(void)
{
    FUN_002cd108(&DAT_0057a9b8.ui->objC);
}

} /* extern "C" */
