#include "ui/UiSpriteApi.h"
#include "ui/ButtonHelpGlobal.h"

extern "C" {

void ifTouchDecrementTimer(void);

/* Tears down the six units: resets each, releases the entries their kinds hold (one for kinds 7, 9, 0x13, 0x14 and 0x15, two for kind 8, and one more for any non-zero kind), then releases the remaining `count` entries and moves the record to state 3. */
void buttonHelpTeardownSlots(void)
{
    ButtonHelpWorkA *record;
    s32 i;
    u8 kind;
    s32 *count;

    record = g_buttonHelp.work;
    i = 0;
    count = &record->touchCount;
    do {
        uiSpriteSelectAnim(&record->slotSprites[i], 1);
        kind = record->slots[i].kind;
        if (kind != 0) {
            if ((kind == 7 || kind == 9) || ((kind == 0x13 || kind == 0x14) || kind == 0x15)) {
                ifTouchDecrementTimer();
                *count = record->touchCount - 1;
            }
            if (record->slots[i].kind == 8) {
                ifTouchDecrementTimer();
                *count = record->touchCount - 1;
                ifTouchDecrementTimer();
                *count = *count - 1;
            }
            ifTouchDecrementTimer();
            *count = record->touchCount - 1;
        }
        i = i + 1;
    } while (i < 6);
    if (0 < record->touchCount) {
        i = 0;
        do {
            ifTouchDecrementTimer();
            i = i + 1;
        } while (i < record->touchCount);
        record->touchCount = 0;
    }
    record = g_buttonHelp.work;
    g_buttonHelp.work->phase = 0;
    record->state = 3;
}

} /* extern "C" */
