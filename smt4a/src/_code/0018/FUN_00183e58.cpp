#include "shard/Block57f0c4.h"

extern "C" {

void uiSpriteSelectAnim(Unit *unit, s32 flag);
void ifTouchDecrementTimer(void);

/* Tears down the six units: resets each, releases the entries their kinds hold (one for kinds 7, 9, 0x13, 0x14 and 0x15, two for kind 8, and one more for any non-zero kind), then releases the remaining `count` entries and moves the record to state 3. */
void FUN_00183e58(void)
{
    Record57f0c4 *record;
    s32 i;
    u8 kind;
    s32 *count;

    record = g_buttonHelp.record;
    i = 0;
    count = &record->count;
    do {
        uiSpriteSelectAnim(&record->units[i], 1);
        kind = record->kinds[i].kind;
        if (kind != 0) {
            if ((kind == 7 || kind == 9) || ((kind == 0x13 || kind == 0x14) || kind == 0x15)) {
                ifTouchDecrementTimer();
                *count = record->count - 1;
            }
            if (record->kinds[i].kind == 8) {
                ifTouchDecrementTimer();
                *count = record->count - 1;
                ifTouchDecrementTimer();
                *count = *count - 1;
            }
            ifTouchDecrementTimer();
            *count = record->count - 1;
        }
        i = i + 1;
    } while (i < 6);
    if (0 < record->count) {
        i = 0;
        do {
            ifTouchDecrementTimer();
            i = i + 1;
        } while (i < record->count);
        record->count = 0;
    }
    record = g_buttonHelp.record;
    g_buttonHelp.record->unk00C = 0;
    record->unk010 = 3;
}

} /* extern "C" */
