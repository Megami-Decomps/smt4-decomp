/* NON_MATCHING: the draw-job and resource-work pointers swap registers at entry. */
#include "battle/Talk/btlTalkBustUpRelease.h"
#include "ui/HowToController.h"
#include "sys/RuntimeObjects.h"
#include "AsdSDK/Source/Gfx/AsdTexManager/AsdTMTexTable.h"

extern "C" {


/* Tears down the controller's work: touch regions, memory slots, buffers and texture table 51,
 * then stops its job and deletes the work area. */
void howToControllerDestroy(void)
{
    CallbackControllerWork *work = (CallbackControllerWork *)g_callbackController.work;
    work->releaseInputAndBuffers();
    for (s32 i = 0; i < 19; ++i) {
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
