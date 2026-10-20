/* Closes the staff roll: releases its resources, frees the work area. */
#include "common.h"
#include "StaffRoll/StaffRollMain.h"

extern "C" {

int FUN_00287728(int layer);
int FUN_0029c3b0(int id);
int asdTMTexTableFreeEntry(int type);
int FUN_002ae898(int type, int index);
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
        FUN_002ae898(0x34, i);
    }
    asdTMTexTableFreeEntry(0x34);
    FUN_0029c3b0(0xf);
    jobStop(work->task, 0);
    asdMemFree(work);
    g_staffRoll = NULL;
}

} /* extern "C" */
