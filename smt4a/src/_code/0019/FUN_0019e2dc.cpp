#include "common.h"

extern "C" {

void asdMemFree(void *memory);
s32 jobStop(u32 job, s32 flag);
extern u32 *g_placeWin;

/* Stops the job whose id g_placeWin points at, frees that record and clears the pointer. */
void FUN_0019e2dc(void)
{
    u32 *job;

    job = g_placeWin;
    jobStop(*g_placeWin, 0);
    asdMemFree(job);
    g_placeWin = NULL;
}

} /* extern "C" */
