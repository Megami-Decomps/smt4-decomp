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
extern Global57f588 DAT_0057f588;

/* Returns whether there is no record or its state byte is 0. */
u8 FUN_0026272c(void)
{
    u8 state;

    state = 0;
    if (DAT_0057f588.record != NULL) {
        state = DAT_0057f588.record->state;
    }
    return DAT_0057f588.record == NULL || state == 0;
}

} /* extern "C" */
