/* NON_MATCHING: initial mode/option stores and final animated-state/delay stores are scheduled differently; -O2 candidate. */
#include "common.h"
#include "util/pairSetFirstResetSecond.h"

struct EventPanelSprite { u8 data[0x8c]; };
struct EventPanelPresetWork {
    u8 unk000[0x20];
    EventPanelSprite sprites[7];
    u32 frame, state, mode;
    u8 optionA, optionB, initialized, animated;
    u32 delay;
};
extern "C" {
void pairSetSecondResetFirst(EventPanelSprite *, u32);
void uiSpriteSelectAnim(EventPanelSprite *, u32);
void uiSpriteSetKeyframe(EventPanelSprite *, u32, u32);
s32 FUN_00291e14();

void eventPanelSelectSpritePreset(EventPanelPresetWork *work, s32 mode, u8 optionB, u8 optionA, s32 animated)
{
    work->mode = mode;
    work->initialized = 1;
    work->optionA = optionA;
    work->optionB = optionB;
    work->animated = animated;
    if (mode == 0) {
        if (FUN_00291e14()) {
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
    } else if (mode == 1) {
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
        work->frame = 0;
        work->state = 4;
    } else {
        work->frame = 0;
        work->state = 2;
    }
}
}
