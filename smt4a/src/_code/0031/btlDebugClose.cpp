#include "shard/X14_BtlUiClose.h"
#include "shard/JobWork.h"
#include "battle/BtlUiGlobal.h"

extern "C" {

s32 jobIsValid(u32 job);
void jobStop(u32 job, s32 arg);
void asdMemFree(void *block);
void asdListBoxJobReset(u32 job);

extern BtlUiCloseState g_btlDebugGlobals;

/* Closes the battle UI: releases the UI block and the helper job, stops the UI's job and clears
 * the display flags the UI owned. */
void btlDebugClose(u32 job)
{
    BtlUiCloseWork *work = (BtlUiCloseWork *)jobGetWork(job);

    if (g_btlUiBlock != NULL) {
        FUN_004aa780(g_btlUiBlock, 0);
    }
    if (g_btlDebugGlobals.helper != NULL) {
        BtlUiHelper *helper = g_btlDebugGlobals.helper;

        g_btlDebugGlobals.helperActive = 0;
        if (jobIsValid(helper->job) != 0) {
            asdListBoxJobReset(helper->job);
            jobStop(helper->job, 0);
        }
        asdMemFree(g_btlDebugGlobals.helper);
        g_btlDebugGlobals.helper = NULL;
    }
    if (jobIsValid(work->job) != 0) {
        jobStop(work->job, 0);
    }
    work->flags &= ~g_btlDebugGlobals.ownedFlags;
}

} /* extern "C" */
