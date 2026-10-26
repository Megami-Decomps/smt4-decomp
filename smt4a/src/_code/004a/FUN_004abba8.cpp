#include "battle/btlUI.h"
#include "code/Code004a.h"

extern "C" {

void FUN_002b24dc(BtlUiObjBA *obj);
void FUN_002fb4b8(BtlUiObjAA *obj);
void saveSlotBeginTransition(BtlUiObjCA *obj, u32 value, s32 flag);

extern BtlUiGlobalsA g_btlUi;

void FUN_004abba8(void*unused, u32 value)
{
    BtlUiA *ui = g_btlUi.ui;

    FUN_002fb4b8(&ui->objA);
    FUN_002b24dc(&ui->objB);
    saveSlotBeginTransition(&ui->objC, value, 0);
}

} /* extern "C" */
