#include "battle/BtlUiGlobal.h"

extern "C" {

void displayChannelInit(BtlUiObjC *obj);


void btlUiInitializeDisplayChannel(void)
{
    displayChannelInit(&g_btlUi.ui->objC);
}

} /* extern "C" */
