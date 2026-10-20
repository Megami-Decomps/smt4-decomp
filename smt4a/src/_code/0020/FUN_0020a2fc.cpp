#include "common.h"

extern "C" {

typedef struct Record {
    /* 0x000 */ u8 unk000[0x400];
    /* 0x400 */ s32 state;
} Record;
extern Record *DAT_0057f290;

/* Returns whether there is no record or its state is 0x28. */
u8 FUN_0020a2fc(void)
{
    s32 state;

    state = 0;
    if (DAT_0057f290 != NULL) {
        state = DAT_0057f290->state;
    }
    return DAT_0057f290 == NULL || state == 0x28;
}

} /* extern "C" */
