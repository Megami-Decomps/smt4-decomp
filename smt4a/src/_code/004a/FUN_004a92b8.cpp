#include "battle/btlUI.h"

extern "C" {

void FUN_00321298(BtlUiObjCA *obj);

extern BtlUiGlobalsA DAT_0057a9b8;

void FUN_004a92b8(void)
{
    FUN_00321298(&DAT_0057a9b8.ui->objC);
}

} /* extern "C" */
