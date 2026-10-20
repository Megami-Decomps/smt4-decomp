#include "common.h"

extern "C" {

/* The common background fade's state: a use count and its job object. */
typedef struct CommonBg {
    /* 0x00 */ s8 users;
    /* 0x01 */ u8 unk01[3];
    /* 0x04 */ u32 *job;       /* points at the job id */
} CommonBg;

extern CommonBg g_commonBg;

void asdMemFree(void *block);
void jobStop(u32 job, s32 arg);
void uiFadeClose(void);

/* Drops one user of the common background fade; the last one stops its job, frees it and closes the fade. */
void uiFadeRelease(void)
{
    g_commonBg.users--;
    if (g_commonBg.users <= 0) {
        u32 *job = g_commonBg.job;

        jobStop(*job, 0);
        asdMemFree(job);
        g_commonBg.job = NULL;
        g_commonBg.users = 0;
        uiFadeClose();
    }
}

} /* extern "C" */
