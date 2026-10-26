/* NON_MATCHING: the worker name is retail's literal (AsdMdlManCalcProc) and the function returns the worker like retail; armcc hoists the address of g_asdMdlWorker into a callee-saved register before the call (retail loads it into the freed r5 afterwards) and clears the two lists in the opposite pool order. */
#include "common.h"
#include "AsdSDK/AsdDebug.h"
#include "AsdSDK/Source/Sys/Kernel/AsdProcess.h"
#include "AsdSDK/AsdMemAlloc.h"

extern "C" {

void tripleClear(u32 *list);
void asdMemFree(void *block);
void FUN_0011890c(void);
void asdMdlWorkerFreeWork(void);

extern void *g_asdMdlWorker;
extern u32 g_asdMdlList;
extern u32 g_asdMdlList2;
extern const char g_asdMdlManagerSourcePath[]; /* __FILE__ of AsdMdlManager.cpp */

/* Starts the model manager's worker: initializes the two model lists and creates the worker
 * with a 4-byte state block, freeing the block again if the worker could not be created. */
void *asdMdlManagerStart(u32 arg)
{
    u32 *state;

    asdDebugTrace(g_asdMdlManagerSourcePath, 877);
    state = (u32 *)asdMemAlloc(0x100, 0x100, 0, 4, 1);

    if (state != NULL) {
        *state = 0;
        tripleClear(&g_asdMdlList);
        tripleClear(&g_asdMdlList2);
        g_asdMdlWorker = reinterpret_cast<void *>(asdProcessCreateSimple(reinterpret_cast<const s8 *>("AsdMdlManCalcProc"), arg, 0, 0, reinterpret_cast<AsdProcUpdateFunc>(FUN_0011890c), reinterpret_cast<AsdProcFunc>(asdMdlWorkerFreeWork), reinterpret_cast<u32>(state)));
        if (g_asdMdlWorker == NULL) {
            asdMemFree(state);
        }
    }
    return g_asdMdlWorker;
}

} /* extern "C" */
