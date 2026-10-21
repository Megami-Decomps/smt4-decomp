#include "common.h"

extern "C" {

typedef struct Record {
    /* 0x00 */ u8 unk00[8];
    /* 0x08 */ u8 state;
} Record;

typedef struct Global57f588 {
    /* 0x00 */ u8 unk00[4];
    /* 0x04 */ Record *record;
} Global57f588;
extern Global57f588 g_messageMain;

/* Returns whether there is no record or its state byte is 0. */
u8 messageMainIsIdle(void)
{
    u8 state;

    state = 0;
    if (g_messageMain.record != NULL) {
        state = g_messageMain.record->state;
    }
    return g_messageMain.record == NULL || state == 0;
}

} /* extern "C" */
