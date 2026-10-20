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
extern Global57f27c DAT_0057f27c;

/* Returns whether there is no record or its state is 4. */
u8 FUN_0023b258(void)
{
    s32 state;

    state = 0;
    if (DAT_0057f27c.record != NULL) {
        state = DAT_0057f27c.record->state;
    }
    return DAT_0057f27c.record == NULL || state == 4;
}

} /* extern "C" */
