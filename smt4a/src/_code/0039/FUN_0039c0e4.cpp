/* NON_MATCHING: memory-slot address retention and texture/resource release load scheduling differ. */
#include "AsdSDK/AsdMemUtil.h"
#include "gfx/SecondaryResourceWork.h"
#include "shard/W5_W5Match7_ResourceHandles.h"
#include "AsdSDK/Source/Gfx/AsdTexManager/AsdTMTexTable.h"
#include "AsdSDK/AsdMemAlloc.h"

extern "C" {
void ifTouchRegionRemove(void);
void asdTMTexTableReleaseNode(s32, s32);
void scrScriptProcessDestroy(void *);
void jobStop(u32, s32);
void asdOperatorDelete(void *);

/* Release the secondary resource controller and all resources it owns. */
void FUN_0039c0e4(void)
{
    SecondaryResourceWork *work = (SecondaryResourceWork *)g_engineResourceHandles.secondary;
    for (s32 i = 0; i < work->touchRegionCount; i++) {
        ifTouchRegionRemove();
    }
    asdMemFreeSlot(reinterpret_cast<void **>(work->memorySlot));
    work->memorySlot = 0;
    for (s32 i = 0; i < 2; i++) {
        asdTMTexTableReleaseNode(0x31, i);
    }
    asdTMTexTableFreeEntry(0x31);
    if (work->scriptProcess != NULL) {
        scrScriptProcessDestroy(work->scriptProcess);
        work->scriptProcess = NULL;
    }
    if (work->scriptData != NULL) {
        asdMemFree(work->scriptData);
        work->scriptData = NULL;
    }
    if (work->resourceData != NULL) {
        asdMemFree(work->resourceData);
        work->resourceData = NULL;
    }
    if (work->textureData != NULL) {
        asdMemFree(work->textureData);
        work->textureData = NULL;
        if (work->resourceData != NULL) {
            asdMemFree(work->resourceData);
            work->resourceData = NULL;
        }
    }
    if (work->auxiliary != NULL) {
        asdMemFree(work->auxiliary);
        work->auxiliary = NULL;
    }
    jobStop(work->job, 0);
    if (g_engineResourceHandles.secondary != NULL) {
        asdOperatorDelete(g_engineResourceHandles.secondary);
        g_engineResourceHandles.secondary = NULL;
    }
}
}
