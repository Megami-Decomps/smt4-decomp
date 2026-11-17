#include "ui/UiSpriteApi.h"
#include "ui/ButtonHelpGlobal.h"

extern "C" {

extern void ifTouchDecrementTimer(void);

/* Resets every button of the button help block and releases the held slots, then rewinds the
 * block's state. */
void buttonHelpResetSlots(void)
{
    ButtonHelpWork *help = g_buttonHelp.work;
    s32 i;

    for (i = 0; i < 6; i++) {
        spriteStartAnimationByIndex(&help->slotSprites[i], 1);
        if (help->slots[i].kind != 0) {
            if (help->slots[i].kind == 7 || help->slots[i].kind == 9) {
                ifTouchDecrementTimer();
            }
            if (help->slots[i].kind == 8) {
                ifTouchDecrementTimer();
                ifTouchDecrementTimer();
            }
            ifTouchDecrementTimer();
        }
    }
    g_buttonHelp.work->state = 3;
    g_buttonHelp.work->phase = 0;
}

} /* extern "C" */
