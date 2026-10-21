#include "battle/btlUI.h"

extern "C" {

void partyRecountSlots(BtlUiObjC *obj);

extern BtlUiGlobals g_btlUi;

void btlUiRecountParty(void)
{
    partyRecountSlots(&g_btlUi.ui->objC);
}

} /* extern "C" */
