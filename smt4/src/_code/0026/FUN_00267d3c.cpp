#include "battle/btlUI.h"

extern "C" {

extern BtlUiGlobals g_btlUi;

extern s32 playSceneIsFadeInDone(BtlUiObjA *scene);
extern s32 FUN_00249974(BtlUiObjB *timer);
extern void playSceneFadeOutStart(BtlUiObjA *scene);
extern void playSceneTimerSubStartReverse(BtlUiObjB *timer);

/* When the battle UI scene has finished fading in and the timer reports ready, fades the scene out
 * and runs the timer in reverse. */
void FUN_00267d3c(void)
{
    BtlUi *ui = g_btlUi.ui;

    if (playSceneIsFadeInDone(&ui->objA) != 0 && FUN_00249974(&ui->objB) != 0) {
        playSceneFadeOutStart(&ui->objA);
        playSceneTimerSubStartReverse(&ui->objB);
    }
}

} /* extern "C" */
