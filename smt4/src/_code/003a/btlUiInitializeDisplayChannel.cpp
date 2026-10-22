#include "battle/btlUI.h"

extern "C" {

void displayChannelInit(BtlUiObjC *obj);

extern BtlUiGlobals g_btlUi;

void btlUiInitializeDisplayChannel(void)
{
    displayChannelInit(&g_btlUi.ui->objC);
}

} /* extern "C" */
