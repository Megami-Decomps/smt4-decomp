#include "battle/BtlUiGlobal.h"

extern "C" {

s32 playSceneIsFadeOutDone(void *scene);
s32 uiSpriteOperationIsComplete(void *timer);
int playSceneFadeInStart(void *scene);
int playSceneTimerSubStart(void *timer);

/* Once the panel's scene has faded out and uiSpriteOperationIsComplete accepts its timer, fades the scene back in and starts the timer. */
void btlUiPanelFadeInWhenReady(void)
{
    BtlUi *ui = g_btlUi.ui;

    if (playSceneIsFadeOutDone(&ui->objA) != 0 && uiSpriteOperationIsComplete(&ui->objB) != 0) {
        playSceneFadeInStart(&ui->objA);
        playSceneTimerSubStart(&ui->objB);
    }
}

} /* extern "C" */
