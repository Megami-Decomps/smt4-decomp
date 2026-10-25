/* NON_MATCHING: the worker entry function lives right after this one in retail, so retail takes its address pc-relative (`add r0, pc, #112`); built code loads it through the literal pool */
#include "common.h"
#include "AsdSDK/AsdDebug.h"
#include "AsdSDK/AsdMemAlloc.h"
#include "AsdSDK/Source/Sys/Kernel/AsdProcess.h"

extern "C" {

void tripleClear(u32 *list);
void asdMemFree(void *block);
void LAB_0014340c(void);
void LAB_00151d9c(void);
void asdMdlManagerReleaseBlock(void);

extern void *g_asdMdlWorker;
extern u32 g_asdMdlList;
extern u32 g_asdMdlList2;

/* Starts the model manager's worker: initializes the two model lists and creates the worker
 * with a 4-byte state block, freeing the block again if the worker could not be created. */
void asdMdlManagerStart(u32 arg)
{
    u32 *state;

    asdDebugTrace("c:\\SMT4F\\SMT4F\\AsdSDK\\Source\\Gfx\\Model\\AsdMdlManager.cpp", 880);
    state = (u32 *)asdMemoryAllocTracked(0x100, 0x100, 0, 4, 1);

    if (state != NULL) {
        *state = 0;
        tripleClear(&g_asdMdlList);
        tripleClear(&g_asdMdlList2);
        g_asdMdlWorker = reinterpret_cast<void *>(asdProcessCreateSimple(reinterpret_cast<const s8 *>(LAB_0014340c), arg, 0, 0, reinterpret_cast<AsdProcUpdateFunc>(LAB_00151d9c), reinterpret_cast<AsdProcFunc>(asdMdlManagerReleaseBlock), reinterpret_cast<u32>(state)));
        if (g_asdMdlWorker == NULL) {
            asdMemFree(state);
        }
    }
}

} /* extern "C" */
