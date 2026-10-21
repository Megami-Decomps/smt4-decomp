#include "battle/btlUI.h"

extern "C" {

extern BtlUiGlobals g_btlUi;

extern s32 playSceneIsFadeInDone(BtlUiObjA *scene);
extern s32 recordQueryStateThree(BtlUiObjB *timer);
extern void playSceneFadeOutStart(BtlUiObjA *scene);
extern void playSceneTimerSubStartReverse(BtlUiObjB *timer);

/* When the battle UI scene has finished fading in and the timer reports ready, fades the scene out
 * and runs the timer in reverse. */
void btlUiPlaySceneFadeOutWhenReady(void)
{
    BtlUi *ui = g_btlUi.ui;

    if (playSceneIsFadeInDone(&ui->objA) != 0 && recordQueryStateThree(&ui->objB) != 0) {
        playSceneFadeOutStart(&ui->objA);
        playSceneTimerSubStartReverse(&ui->objB);
    }
}

} /* extern "C" */
