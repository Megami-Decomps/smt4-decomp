#include "battle/BtlUiGlobal.h"

extern "C" {

s32 playSceneAcceptsInput(BtlUiObjC *obj);


void btlUiGetAcceptedSelection(u32 unused, u16 *outA, u16 *outB)
{
    BtlUi *ui = g_btlUi.ui;

    if (playSceneAcceptsInput(&ui->objC) != 0) {
        *outA = ui->panelState.acceptedCommand;
        *outB = ui->unk7E50;
    }
}

} /* extern "C" */
