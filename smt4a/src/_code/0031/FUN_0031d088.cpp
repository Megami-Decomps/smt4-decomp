/* NON_MATCHING: retail keeps a second copy of the work pointer (`mov r7, r6`, read for jobStop)
 * and so saves r9/sl; everything else matches. */
#include "AsdSDK/AsdMemUtil.h"
#include "shard/W5_W5Match6_CallbackController.h"
#include "AsdSDK/Source/Gfx/AsdTexManager/AsdTMTexTable.h"

extern "C" {

void jobStop(u32 job, s32 arg);
void ifTouchRegionRemove(void);
void asdMemFree(void *block);
void asdTMTexTableReleaseNode(s32 table, s32 node);
void asdTMTexTableFreeEntry(s32 table);
void asdOperatorDelete(void *block);

/* Tears down the controller's work: touch regions, memory slots, buffers and texture table 51,
 * then stops its job and deletes the work area. */
void FUN_0031d088(void)
{
    CallbackControllerWork *work = (CallbackControllerWork *)g_callbackController.work;
    s32 i;

    for (i = 0; i < work->touchRegionCount; i++) {
        ifTouchRegionRemove();
    }
    for (i = 0; i < 3; i++) {
        asdMemFreeSlot(static_cast<void **>(work->slots[i]));
        work->slots[i] = NULL;
    }
    if (work->bufferA != NULL) {
        asdMemFree(work->bufferA);
        work->bufferA = NULL;
    }
    if (work->bufferB != NULL) {
        asdMemFree(work->bufferB);
        work->bufferB = NULL;
    }
    for (i = 0; i < 19; i++) {
        if (asdTMTexTableNodeIsLoaded(51, i) != 0) {
            asdTMTexTableReleaseNode(51, i);
        }
    }
    asdTMTexTableFreeEntry(51);
    jobStop(work->job, 0);
    if (g_callbackController.work != NULL) {
        asdOperatorDelete(g_callbackController.work);
        g_callbackController.work = NULL;
    }
}

} /* extern "C" */
