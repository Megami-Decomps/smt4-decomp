#include "common.h"

extern "C" {

int asdMemFree(void *ptr);
int jobStop(u32 job, int mode);

extern u32 *g_placeWin;

void FUN_002a7890(void)
{
    u32 *block = g_placeWin;

    jobStop(*g_placeWin, 0);
    asdMemFree(block);
    g_placeWin = NULL;
}

} /* extern "C" */
