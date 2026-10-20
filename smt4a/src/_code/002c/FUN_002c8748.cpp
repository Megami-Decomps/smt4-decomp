#include "common.h"

extern "C" {

typedef struct Record {
    /* 0x00 */ u8 unk00[4];
    /* 0x04 */ s32 state;
} Record;
extern Record *g_uiQuest;

/* Returns 0 when the record's state is 0x11, 0x12 or 0x13, otherwise 1. */
u32 FUN_002c8748(void)
{
    s32 state;
    u32 result;

    state = g_uiQuest->state;
    if ((state == 0x11 || state == 0x12) || (state == 0x13)) {
        result = 0;
    } else {
        result = 1;
    }
    return result;
}

} /* extern "C" */
