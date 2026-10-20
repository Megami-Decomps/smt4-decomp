#include "battle/btlUI.h"

extern "C" {

void FUN_002b1264(BtlUiObjCA *obj);

extern BtlUiGlobalsA DAT_0057a9b8;

void FUN_004aa008(void)
{
    FUN_002b1264(&DAT_0057a9b8.ui->objC);
}

} /* extern "C" */
