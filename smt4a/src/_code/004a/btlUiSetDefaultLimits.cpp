#include "battle/BtlUiGlobal.h"

extern "C" {

void entrySetDefaultLimits(BtlUiObjCA *obj);


void btlUiSetDefaultLimits(void)
{
    entrySetDefaultLimits(&g_btlUi.ui->objC);
}

} /* extern "C" */
