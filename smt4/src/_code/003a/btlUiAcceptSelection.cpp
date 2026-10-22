#include "battle/btlUI.h"

extern "C" {

s32 playSceneAcceptsInput(BtlUiObjC *obj);
void FUN_0028cb40(BtlUiObjC *obj, u16 *a, u16 *b);

extern BtlUiGlobals g_btlUi;

s32 btlUiAcceptSelection(void)
{
    BtlUi *ui = g_btlUi.ui;
    s32 *state = &ui->panelState.state;
    s32 result;

    if (*state == 0xB) {
        return 0;
    }
    result = playSceneAcceptsInput(&ui->objC);
    if (result != 0) {
        FUN_0028cb40(&ui->objC, &ui->unk7E4E, &ui->unk7E50);
        if (ui->unk7E4E == 0xE) {
            *state = 10;
        } else {
            *state = 0;
        }
    }
    return result;
}

} /* extern "C" */
