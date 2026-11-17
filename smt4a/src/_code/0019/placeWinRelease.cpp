#include "font/PlaceWin.h"

extern "C" {

void asdMemFree(void *memory);
s32 jobStop(u32 job, s32 flag);
extern PlaceWindow *g_placeWin;

/* Stops the job of the place window, frees that record and clears the pointer. */
void placeWinRelease(void)
{
    PlaceWindow *job;

    job = g_placeWin;
    jobStop(g_placeWin->job, 0);
    asdMemFree(job);
    g_placeWin = NULL;
}

} /* extern "C" */
