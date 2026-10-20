#include "battle/btlUI.h"

extern "C" {

void FUN_002dc424(BtlUiObjC *obj);

extern BtlUiGlobals DAT_00439c88;

void FUN_003aef64(void)
{
    if (DAT_00439c88.ui != NULL) {
        FUN_002dc424(&DAT_00439c88.ui->objC);
    }
}

} /* extern "C" */
