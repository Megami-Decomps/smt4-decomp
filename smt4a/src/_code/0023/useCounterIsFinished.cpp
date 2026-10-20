#include "common.h"

extern "C" {

typedef struct Record {
    /* 0x000 */ u8 unk000[0x744];
    /* 0x744 */ s32 state;
} Record;

typedef struct Global57f27c {
    /* 0x00 */ u8 unk00[4];
    /* 0x04 */ Record *record;
} Global57f27c;
extern Global57f27c g_useCounter;

/* Returns whether there is no record or its state is 4. */
u8 useCounterIsFinished(void)
{
    s32 state;

    state = 0;
    if (g_useCounter.record != NULL) {
        state = g_useCounter.record->state;
    }
    return g_useCounter.record == NULL || state == 4;
}

} /* extern "C" */
