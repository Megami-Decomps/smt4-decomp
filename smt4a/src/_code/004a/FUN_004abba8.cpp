#include "battle/BtlUiGlobal.h"
#include "code/Code004a.h"

extern "C" {

void FUN_002b24dc(BtlUiObjBA *obj);
void statusPanelStartClosingRows(BtlUiObjAA *obj);
void saveSlotBeginTransition(BtlUiObjCA *obj, u32 value, s32 flag);


void FUN_004abba8(void*unused, u32 value)
{
    BtlUiA *ui = g_btlUi.ui;

    statusPanelStartClosingRows(&ui->objA);
    FUN_002b24dc(&ui->objB);
    saveSlotBeginTransition(&ui->objC, value, 0);
}

} /* extern "C" */
