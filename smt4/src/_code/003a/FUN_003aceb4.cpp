#include "common.h"

extern "C" {

/* Record whose halfword at 8 is an id (negative = none). */
typedef struct {
    u8 unk00[8];
    s16 id;             /* 0x08 */
} IdRecord;

/* Countdown state: a signed frame counter at +1 and a record pointer at +4. */
typedef struct {
    u8 unk00;
    s8 timer;           /* 0x01 */
    u8 unk02[2];
    IdRecord *record;   /* 0x04 */
} Countdown;

extern Countdown g_countdown;

int FUN_002958f8(int id, int arg);
int asdTMTexTableFreeEntry(int kind);
int FUN_002ae898(int kind, int index);

/* Ticks the countdown; when it runs out, triggers the record's id and clears kind 0x22. */
void FUN_003aceb4(void)
{
    int i;

    g_countdown.timer = g_countdown.timer - 1;
    if (g_countdown.timer <= 0) {
        if (g_countdown.record->id >= 0) {
            FUN_002958f8(g_countdown.record->id, 1);
        }
        i = 0;
        do {
            FUN_002ae898(0x22, i);
            i++;
        } while (i < 2);
        asdTMTexTableFreeEntry(0x22);
        g_countdown.timer = 0;
    }
}

} /* extern "C" */
