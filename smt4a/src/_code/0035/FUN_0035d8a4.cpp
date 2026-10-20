#include "common.h"

extern "C" {

/* A use count and the object (its first word is a job id) that exists while the count is positive. */
typedef struct UseCounter0035d8a4 {
    /* 0x00 */ s8 users;
    /* 0x01 */ u8 unk01[3];
    /* 0x04 */ u32 *object;
} UseCounter0035d8a4;

extern UseCounter0035d8a4 g_useCounter;

void asdMemFree(void *block);
void jobStop(u32 job, s32 arg);

/* Drops one use; the last one stops the object's job and frees it. */
void FUN_0035d8a4(void)
{
    g_useCounter.users--;
    if (g_useCounter.users <= 0) {
        u32 *object = g_useCounter.object;

        jobStop(*object, 0);
        asdMemFree(object);
        g_useCounter.object = NULL;
        g_useCounter.users = 0;
    }
}

} /* extern "C" */
