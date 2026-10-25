/* NON_MATCHING: retail keeps the zero arguments in a callee-saved register (r5/r6 split, 5-register frame) and orders the stack-argument stores differently. */
#include "shard/W6_W6Match2_MemoryDebug.h"
#include "AsdSDK/Source/Sys/Kernel/AsdProcess.h"

extern "C" {

extern MemoryDebugState DAT_00465120;
extern const char DAT_00409c58[]; /* "asdMemMap" */
extern u32 DAT_0046515c;

u32 memoryDebugRefresh();
s32 jobClearWorkSlot(u32 job);
void jobSetParent(void *parent, void *job);
void jobStop(void *job, s32 mode);

/* Starts a debug process parented to the root and remembers it as the latest one. */
static __inline void *memoryDebugStartProcess(const char *name, s32 id, u32 (*update)(),
                                              s32 (*finish)(u32), void *work)
{
    void *process = reinterpret_cast<void *>(asdProcessCreateSimple(reinterpret_cast<const s8 *>(name), id, 0, 0, reinterpret_cast<AsdProcUpdateFunc>(update), reinterpret_cast<AsdProcFunc>(finish), reinterpret_cast<u32>(work)));
    if (process == NULL) {
        return NULL;
    }
    jobSetParent(NULL, process);
    DAT_00465120.lastMapProcess = process;
    return process;
}

/* Toggles the asdMemMap debug process: stops it when running, otherwise lifts the memory limit
 * and starts it. */
void FUN_00102e34(void)
{
    if (DAT_00465120.mapProcess != NULL) {
        jobStop(DAT_00465120.mapProcess, 0);
        DAT_00465120.mapProcess = NULL;
        return;
    }
    DAT_00465120.settings->limit = 0x08800000;
    DAT_00465120.settings->flags |= 1;
    DAT_0046515c = 0;
    DAT_00465120.mapProcess = memoryDebugStartProcess(DAT_00409c58, 0x15e, memoryDebugRefresh,
                                                      jobClearWorkSlot, &DAT_0046515c);
}

} /* extern "C" */
