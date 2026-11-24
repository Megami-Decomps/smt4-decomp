#include "battle/BtlUiGlobal.h"

extern "C" {

void statusPanelStartClosingRows(BtlUiObjAA *obj);


void btlUiEnterStateEntryStartup(void)
{
    BtlUiA *ui = g_btlUi.ui;

    ui->state = 8;
    statusPanelStartClosingRows(&ui->objA);
}

} /* extern "C" */
