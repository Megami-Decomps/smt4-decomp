#include "battle/BtlUiGlobal.h"

extern "C" {

void listClearActiveFlags(BtlUiObjCA *obj);


void FUN_004abde4(void)
{
    listClearActiveFlags(&g_btlUi.ui->objC);
}

} /* extern "C" */
