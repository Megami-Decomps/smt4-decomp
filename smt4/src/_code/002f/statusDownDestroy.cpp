#include "status/StatusDown.h"

extern "C" {

int asdMemFreeSlot(AsdText *text);
int asdMemFree(StatusDownState *ptr);
int jobStop(u32 job, int mode);

void statusDownDestroy(void)
{
    StatusDownState *block = g_statusDown;

    statusDownClearTouchRegions(block);
    asdMemFreeSlot(block->text);
    jobStop(block->job, 0);
    asdMemFree(block);
    g_statusDown = NULL;
}

} /* extern "C" */
