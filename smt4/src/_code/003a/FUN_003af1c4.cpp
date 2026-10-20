#include "battle/btlUI.h"

extern "C" {

void partyRecountSlots(BtlUiObjC *obj);

extern BtlUiGlobals g_btlUi;

void FUN_003af1c4(void)
{
    partyRecountSlots(&g_btlUi.ui->objC);
}

} /* extern "C" */
