#include "shard/X14_BtlUiClose.h"
#include "shard/JobWork.h"
#include "battle/BtlUiGlobal.h"

extern "C" {

s32 jobIsValid(u32 job);
void jobStop(u32 job, s32 arg);
void asdMemFree(void *block);
void FUN_003592dc(u32 job);

extern BtlUiCloseState DAT_005715f8;

/* Closes the battle UI: releases the UI block and the helper job, stops the UI's job and clears
 * the display flags the UI owned. */
void btlDebugClose(u32 job)
{
    BtlUiCloseWork *work = (BtlUiCloseWork *)jobGetWork(job);

    if (g_btlUiBlock != NULL) {
        FUN_004aa780(g_btlUiBlock, 0);
    }
    if (DAT_005715f8.helper != NULL) {
        BtlUiHelper *helper = DAT_005715f8.helper;

        DAT_005715f8.helperActive = 0;
        if (jobIsValid(helper->job) != 0) {
            FUN_003592dc(helper->job);
            jobStop(helper->job, 0);
        }
        asdMemFree(DAT_005715f8.helper);
        DAT_005715f8.helper = NULL;
    }
    if (jobIsValid(work->job) != 0) {
        jobStop(work->job, 0);
    }
    work->flags &= ~DAT_005715f8.ownedFlags;
}

} /* extern "C" */
