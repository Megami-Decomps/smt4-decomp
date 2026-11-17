/* NON_MATCHING: retail keeps the zero arguments in a callee-saved register (r5/r6 split, 5-register frame) and orders the stack-argument stores differently. */
#include "classes/AllocatorState.h"
#include "AsdSDK/Source/Sys/Kernel/AsdProcess.h"

extern "C" {

extern const char DAT_0053d898[]; /* "asdMemMap" */
extern u32 DAT_005b4068;

u32 memoryDebugRefresh();
s32 jobClearCachedWork(u32 job);
void jobSetParent(void *parent, void *job);
void jobStop(void *job, s32 mode);

/* Starts a debug process parented to the root and remembers it as the latest one. */
static __inline void *memoryDebugStartProcess(const char *name, s32 id, u32 (*update)(),
                                              s32 (*finish)(u32), void *work)
{
    AllocatorStateA *allocationAddressRangesPtr = &g_asdMemState;
    void *process = reinterpret_cast<void *>(asdProcessCreateSimple(reinterpret_cast<const s8 *>(name), id, 0, 0, reinterpret_cast<AsdProcUpdateFunc>(update), reinterpret_cast<AsdProcFunc>(finish), reinterpret_cast<u32>(work)));
    if (process == NULL) {
        return NULL;
    }
    jobSetParent(NULL, process);
    allocationAddressRangesPtr->lastMapProcess = process;
    return process;
}

/* Toggles the asdMemMap debug process: stops it when running, otherwise lifts the memory limit
 * and starts it. */
void FUN_0013778c(void)
{
    if (g_asdMemState.mapProcess != NULL) {
        jobStop(g_asdMemState.mapProcess, 0);
        g_asdMemState.mapProcess = NULL;
        return;
    }
    g_asdMemState.usage->limit = 0x08800000;
    g_asdMemState.usage->debugFlags |= 1;
    DAT_005b4068 = 0;
    g_asdMemState.mapProcess = memoryDebugStartProcess(
        DAT_0053d898, 0x15e, memoryDebugRefresh, jobClearCachedWork, &DAT_005b4068);
}

} /* extern "C" */
