#include "common.h"

extern "C" {

typedef struct Countdown {
    /* 0x0 */ s8 count;
    /* 0x1 */ u8 unk1[3];
    /* 0x4 */ u32 *handle;  /* heap block whose first word is the job to stop */
} Countdown;

extern Countdown g_countdown;

s32 asdMemFree(u32 *block);
s32 jobStop(u32 job, s32 arg);

/* Counts down; at zero stops the job and frees the handle block. */
void countdownTick(void)
{
    g_countdown.count--;
    if (g_countdown.count <= 0) {
        u32 *handle = g_countdown.handle;

        jobStop(*handle, 0);
        asdMemFree(handle);
        g_countdown.handle = NULL;
        g_countdown.count = 0;
    }
}

} /* extern "C" */
