#include "battle/btlUI.h"

extern "C" {

void FUN_002b1264(BtlUiObjCA *obj);

extern BtlUiGlobalsA g_btlUi;

void FUN_004aa008(void)
{
    FUN_002b1264(&g_btlUi.ui->objC);
}

} /* extern "C" */
