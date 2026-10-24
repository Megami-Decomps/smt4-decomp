#include "battle/btlUI.h"

extern "C" {

void listClearActiveFlags(BtlUiObjCA *obj);

extern BtlUiGlobalsA g_btlUi;

void FUN_004abde4(void)
{
    listClearActiveFlags(&g_btlUi.ui->objC);
}

} /* extern "C" */
