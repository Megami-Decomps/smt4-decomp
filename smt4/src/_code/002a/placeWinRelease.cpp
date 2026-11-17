#include "font/PlaceWin.h"

extern "C" {

int asdMemFree(void *ptr);
int jobStop(u32 job, int mode);

extern PlaceWindow *g_placeWin;

void placeWinRelease(void)
{
    PlaceWindow *block = g_placeWin;

    jobStop(g_placeWin->job, 0);
    asdMemFree(block);
    g_placeWin = NULL;
}

} /* extern "C" */
