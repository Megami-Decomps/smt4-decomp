#include "battle/BtlUiOpening.h"
#include "ui/UiSpriteApi.h"
#include "common.h"
#include "sys/RuntimeObjects.h"

extern "C" {
s32 btlIsDefeatSuppressed();

void eventPanelSelectSpritePreset(BtlUiObjBA *work, s32 mode, u8 optionB, u8 optionA, u8 animated)
{
    work->mode = mode;
    work->initialized = 1;
    work->optionA = optionA;
    work->optionB = optionB;
    work->animated = animated;
    if (work->mode == 0) {
        if (btlIsDefeatSuppressed()) {
            pairSetFirstResetSecond(&work->sprites[0], 41);
            uiSpriteSelectAnim(&work->sprites[0], 0);
            pairSetSecondResetFirst(&work->sprites[3], 9);
            uiSpriteSelectAnim(&work->sprites[3], 0);
            pairSetSecondResetFirst(&work->sprites[2], 6);
            uiSpriteSelectAnim(&work->sprites[2], 2);
            pairSetSecondResetFirst(&work->sprites[1], 5);
            uiSpriteSelectAnim(&work->sprites[1], 1);
            pairSetFirstResetSecond(&work->sprites[5], 166);
            uiSpriteSetKeyframe(&work->sprites[5], 2, 0);
        } else {
            pairSetFirstResetSecond(&work->sprites[0], 41);
            uiSpriteSelectAnim(&work->sprites[0], 0);
            pairSetSecondResetFirst(&work->sprites[3], 7);
            uiSpriteSelectAnim(&work->sprites[3], 0);
            pairSetSecondResetFirst(&work->sprites[2], 2);
            uiSpriteSelectAnim(&work->sprites[2], 2);
            pairSetSecondResetFirst(&work->sprites[1], 0);
            uiSpriteSelectAnim(&work->sprites[1], 1);
            pairSetFirstResetSecond(&work->sprites[5], 9);
            uiSpriteSetKeyframe(&work->sprites[5], 2, 0);
        }
    } else if (work->mode == 1) {
        pairSetFirstResetSecond(&work->sprites[0], 42);
        uiSpriteSelectAnim(&work->sprites[0], 0);
        pairSetSecondResetFirst(&work->sprites[3], 8);
        uiSpriteSelectAnim(&work->sprites[3], 0);
        pairSetSecondResetFirst(&work->sprites[2], 3);
        uiSpriteSelectAnim(&work->sprites[2], 2);
        pairSetSecondResetFirst(&work->sprites[1], 1);
        uiSpriteSelectAnim(&work->sprites[1], 1);
        pairSetFirstResetSecond(&work->sprites[5], 10);
        uiSpriteSetKeyframe(&work->sprites[5], 2, 0);
    }
    if (animated) {
        uiSpriteSelectAnim(&work->sprites[6], 4);
        work->delay = 10;
        work->timer = panelStartState(4);
    } else {
        work->timer = panelStartState(2);
    }
}
}
