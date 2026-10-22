#include "battle/btlUI.h"

extern "C" {

s32 playSceneAcceptsInput(BtlUiObjC *obj);

extern BtlUiGlobals g_btlUi;

void btlUiGetAcceptedSelection(u32 unused, u16 *outA, u16 *outB)
{
    BtlUi *ui = g_btlUi.ui;

    if (playSceneAcceptsInput(&ui->objC) != 0) {
        *outA = ui->unk7E4E;
        *outB = ui->unk7E50;
    }
}

} /* extern "C" */
