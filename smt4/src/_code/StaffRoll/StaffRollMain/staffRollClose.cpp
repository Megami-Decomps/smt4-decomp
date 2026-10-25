/* Closes the staff roll: releases its resources, frees the work area. */
#include "common.h"
#include "StaffRoll/StaffRollMain.h"
#include "AsdSDK/Source/Gfx/AsdTexManager/AsdTMTexTable.h"

extern "C" {

int soundChannelStopAll(int id);
int asdTMTexTableReleaseNode(int type, int index);
int asdMemFree(void *ptr);               /* heap free */
int jobStop(u32 task, int flags);     /* kill a task */

extern StaffRollWork *g_staffRoll;

void staffRollClose(void)
{
    StaffRollWork *work = g_staffRoll;
    int i;

    work->closing = 1;
    if (work->active) {
        FUN_00287728(0);
        FUN_00287728(1);
    }
    for (i = 0; i < 12; i++) {
        asdTMTexTableReleaseNode(0x34, i);
    }
    asdTMTexTableFreeEntry(0x34);
    soundChannelStopAll(0xf);
    jobStop(work->task, 0);
    asdMemFree(work);
    g_staffRoll = NULL;
}

} /* extern "C" */
