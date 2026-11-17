#include "battle/BtlUiGlobal.h"

extern "C" {

void partyRecountSlots(BtlUiObjC *obj);


void btlUiRecountParty(void)
{
    partyRecountSlots(&g_btlUi.ui->objC);
}

} /* extern "C" */
