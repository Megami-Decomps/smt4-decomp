#include "common.h"

extern "C" {

typedef struct Record {
    /* 0x0000 */ u8 unk0000[0x4364];
    /* 0x4364 */ s32 state;
} Record;

typedef struct Global588c40 {
    /* 0x00 */ u8 unk00[4];
    /* 0x04 */ Record *record;
} Global588c40;
extern Global588c40 g_engineCleanupOwner;

/* Returns 1 when there is no record or its state is 0x17. */
u32 engineCleanupIsDone(void)
{
    u32 result;

    if (g_engineCleanupOwner.record == NULL || g_engineCleanupOwner.record->state == 0x17) {
        result = 1;
    } else {
        result = 0;
    }
    return result;
}

} /* extern "C" */
