/* NON_MATCHING: retail keeps the zero arguments in a callee-saved register (r5/r6 split, 5-register frame) and orders the stack-argument stores differently. */
#include "shard/W6_W6Match2_MemoryDebug.h"

extern "C" {

extern MemoryDebugState g_allocationAddressRanges;
extern const char DAT_0053d898[]; /* "asdMemMap" */
extern u32 DAT_005b4068;

u32 memoryDebugRefresh();
s32 jobClearCachedWork(u32 job);
void *asdProcessCreateSimple(const char *name, s32 id, s32 a, s32 b, u32 (*update)(),
                             s32 (*finish)(u32), void *work);
void jobSetParent(void *parent, void *job);
void jobStop(void *job, s32 mode);

/* Starts a debug process parented to the root and remembers it as the latest one. */
static __inline void *memoryDebugStartProcess(const char *name, s32 id, u32 (*update)(),
                                              s32 (*finish)(u32), void *work)
{
    void *process = asdProcessCreateSimple(name, id, 0, 0, update, finish, work);
    if (process == NULL) {
        return NULL;
    }
    jobSetParent(NULL, process);
    g_allocationAddressRanges.lastMapProcess = process;
    return process;
}

/* Toggles the asdMemMap debug process: stops it when running, otherwise lifts the memory limit
 * and starts it. */
void FUN_0013778c(void)
{
    if (g_allocationAddressRanges.mapProcess != NULL) {
        jobStop(g_allocationAddressRanges.mapProcess, 0);
        g_allocationAddressRanges.mapProcess = NULL;
        return;
    }
    g_allocationAddressRanges.settings->limit = 0x08800000;
    g_allocationAddressRanges.settings->flags |= 1;
    DAT_005b4068 = 0;
    g_allocationAddressRanges.mapProcess = memoryDebugStartProcess(
        DAT_0053d898, 0x15e, memoryDebugRefresh, jobClearCachedWork, &DAT_005b4068);
}

} /* extern "C" */
