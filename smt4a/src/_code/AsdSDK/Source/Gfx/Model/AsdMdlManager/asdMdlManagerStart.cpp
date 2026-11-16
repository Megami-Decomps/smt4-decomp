#include "common.h"
#include "AsdSDK/AsdDebug.h"
#include "AsdSDK/AsdMemAlloc.h"
#include "AsdSDK/Source/Sys/Kernel/AsdProcess.h"

extern "C" {

void tripleClear(u32 *list);
void asdMemFree(void *block);
s32 modelManagerUpdateCallback(void);
void asdMdlManagerReleaseBlock(u32 job);

extern u32 g_asdMdlWorker;
extern u32 g_asdMdlList;
extern u32 g_asdMdlList2;

/* Starts the model manager's worker: initializes the two model lists and creates the worker
 * with a 4-byte state block, freeing the block again if the worker could not be created.
 * Returns the worker process (0 on failure). */
s32 asdMdlManagerStart(s32 group)
{
    u32 *state;

    asdDebugTrace("c:\\SMT4F\\SMT4F\\AsdSDK\\Source\\Gfx\\Model\\AsdMdlManager.cpp", 880);
    state = (u32 *)asdMemoryAllocTracked(0x100, 0x100, 0, 4, 1);
    if (state == NULL) {
        return 0;
    }
    *state = 0;
    tripleClear(&g_asdMdlList);
    tripleClear(&g_asdMdlList2);
    g_asdMdlWorker = asdProcessCreateSimple(reinterpret_cast<const s8 *>("AsdMdlManCalcProc"), group, 0, 0, reinterpret_cast<AsdProcUpdateFunc>(modelManagerUpdateCallback), asdMdlManagerReleaseBlock, reinterpret_cast<u32>(state));
    if (g_asdMdlWorker == 0) {
        asdMemFree(state);
    }
    return g_asdMdlWorker;
}

} /* extern "C" */
