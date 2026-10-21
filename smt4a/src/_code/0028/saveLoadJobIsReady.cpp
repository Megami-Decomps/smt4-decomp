#include "common.h"

extern "C" {

typedef struct SaveJob {
    /* 0x00 */ u8 unk00[0xC];
    /* 0x0C */ s32 state;
    /* 0x10 */ u8 unk10[0x44];
    /* 0x54 */ s8 active;
} SaveJob;

typedef struct SaveLoadThread {
    /* 0x0 */ u8 unk0[8];
    /* 0x8 */ SaveJob *job;
} SaveLoadThread;

extern SaveLoadThread g_saveLoadThread;

s32 FUN_0035d83c(void);

/* Returns 1 when the save/load job exists, is active, and is in state 2 (and FUN_0035d83c reports 0). */
u32 saveLoadJobIsReady(void)
{
    if (g_saveLoadThread.job != NULL) {
        if (FUN_0035d83c() == 0 && g_saveLoadThread.job->active != 0 && g_saveLoadThread.job->state == 2) {
            return 1;
        }
        return 0;
    }
    return 0;
}

} /* extern "C" */
