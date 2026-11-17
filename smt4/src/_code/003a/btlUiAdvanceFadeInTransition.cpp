#include "battle/BtlUiGlobal.h"

extern "C" {

void FUN_002251d4(BtlUiObjC *obj);
void playSceneTimerSubStart(BtlUiObjB *obj);
void playSceneFadeInStart(BtlUiObjA *obj);
s32 uiSpriteOperationIsComplete(BtlUiObjB *obj);
s32 playSceneIsFadeOutDone(BtlUiObjA *obj);
void FUN_0033c6f8(u32 arg);


void btlUiAdvanceFadeInTransition(void)
{
    BtlUi *ui = g_btlUi.ui;
    s32 *state = &ui->panelState.state;

    if (*state == 9) {
        FUN_0033c6f8(ui->panelState.unk20);
        FUN_002251d4(&ui->objC);
        *state = 7;
        ui = g_btlUi.ui;
        if (playSceneIsFadeOutDone(&ui->objA) != 0 && uiSpriteOperationIsComplete(&ui->objB) != 0) {
            playSceneFadeInStart(&ui->objA);
            playSceneTimerSubStart(&ui->objB);
        }
    }
}

} /* extern "C" */
