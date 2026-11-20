/* NON_MATCHING: all resource/texture releases match; only the memorySlot store computes r4 = work + 0x5d8 (two adds) instead of retail's `mov r4, r5; str r6, [r4, #1496]`. */
#include "AsdSDK/AsdMemUtil.h"
#include "gfx/SecondaryResourceWork.h"
#include "shard/W5_W5Match7_ResourceHandles.h"
#include "AsdSDK/Source/Gfx/AsdTexManager/AsdTMTexTable.h"
#include "AsdSDK/AsdMemAlloc.h"
#include "script/scrScriptProcess.h"

extern "C" {
void ifTouchRegionRemove(void);
void asdTMTexTableReleaseNode(s32, s32);
void jobStop(u32, s32);
void asdOperatorDelete(void *);

static __inline void freePtr(void **ptr)
{
    if (*ptr != NULL) {
        asdMemFree(*ptr);
        *ptr = NULL;
    }
}

/* Release the secondary resource controller and all resources it owns. */
void newHighwayInfoDestroy(void)
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
    freePtr(&work->scriptData);
    freePtr(&work->resourceData);
    if (work->textureData != NULL) {
        asdMemFree(work->textureData);
        work->textureData = NULL;
        freePtr(&work->resourceData);
    }
    freePtr(&work->auxiliary);
    jobStop(work->job, 0);
    if (g_engineResourceHandles.secondary != NULL) {
        asdOperatorDelete(g_engineResourceHandles.secondary);
        g_engineResourceHandles.secondary = NULL;
    }
}
}
