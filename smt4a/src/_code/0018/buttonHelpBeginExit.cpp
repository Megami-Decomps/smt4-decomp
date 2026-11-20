#include "ui/UiSpriteApi.h"
#include "ui/ButtonHelpGlobal.h"

extern "C" {
void ifTouchDecrementTimer();
void uiSpriteSetScaleKeyframe(UiSpriteState *sprite, s32 enabled, s32 initial);

// Release help touch registrations and start the four panel exit animations.
void buttonHelpBeginExit(s32 clearKinds)
{
    ButtonHelpWorkA *work = g_buttonHelp.work;
    for (s32 index = 0; index < 6; ++index) {
        uiSpriteSelectAnim(&work->slotSprites[index], 1);
        if (work->slots[index].kind != 0) {
            if (clearKinds != 0)
                work->slots[index].kind = 0;
            ifTouchDecrementTimer();
            --work->touchCount;
        }
    }
    if (work->touchCount > 0) {
        for (s32 index = 0; index < work->touchCount; ++index)
            ifTouchDecrementTimer();
        work->touchCount = 0;
    }
    for (s32 index = 0; index < 4; ++index) {
        if (work->mode == 1) {
            uiSpriteSetKeyframe(&work->panelSprites[index], 3, 0);
        } else if (work->mode == 2) {
            uiSpriteSetImageKeyframe(&work->panelSprites[index], 1, 0);
            uiSpriteSetScaleKeyframe(&work->panelSprites[index], 1, 0);
        } else {
            uiSpriteSetScaleKeyframe(&work->panelSprites[index], 0, 1);
        }
    }
    work = g_buttonHelp.work;
    work->phase = 0;
    work->state = 3;
}
}
