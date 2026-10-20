#include "battle/btlUI.h"

extern "C" {

void FUN_0034eda0(BtlUiObjCA *obj);

extern BtlUiGlobalsA g_btlUi;

void FUN_004ab6f4(void)
{
    if (g_btlUi.ui != NULL) {
        FUN_0034eda0(&g_btlUi.ui->objC);
    }
}

} /* extern "C" */
