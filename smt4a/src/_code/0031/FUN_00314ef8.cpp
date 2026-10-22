/* NON_MATCHING: only the final 64-bit `flags &= ~ownedFlags`: retail loads both words with ldm/ldrd
 * and clears the low word with mvn+and; the build uses two ldr and bic for each word. */
#include "shard/X14_BtlUiClose.h"

extern "C" {

BtlUiCloseWork *jobGetWork(void);
s32 jobIsValid(u32 job);
void jobStop(u32 job, s32 arg);
void asdMemFree(void *block);
void FUN_003592dc(u32 job);
void FUN_004aa780(void *block, s32 arg);

extern void *g_btlUiBlock;
extern BtlUiCloseState DAT_005715f8;

/* Closes the battle UI: releases the UI block and the helper job, stops the UI's job and clears
 * the display flags the UI owned. */
void FUN_00314ef8(void)
{
    BtlUiCloseWork *work = jobGetWork();
    BtlUiHelper *helper;

    if (g_btlUiBlock != NULL) {
        FUN_004aa780(g_btlUiBlock, 0);
    }
    helper = DAT_005715f8.helper;
    if (helper != NULL) {
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
