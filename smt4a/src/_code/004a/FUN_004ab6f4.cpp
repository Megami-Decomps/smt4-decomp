#include "battle/btlUI.h"

extern "C" {

void FUN_0034eda0(BtlUiObjCA *obj);

extern BtlUiGlobalsA DAT_0057a9b8;

void FUN_004ab6f4(void)
{
    if (DAT_0057a9b8.ui != NULL) {
        FUN_0034eda0(&DAT_0057a9b8.ui->objC);
    }
}

} /* extern "C" */
