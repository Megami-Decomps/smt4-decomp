#include "battle/btlUI.h"

extern "C" {

void FUN_002dc424(BtlUiObjC *obj);

extern BtlUiGlobals g_btlUi;

void FUN_003aef64(void)
{
    if (g_btlUi.ui != NULL) {
        FUN_002dc424(&g_btlUi.ui->objC);
    }
}

} /* extern "C" */
