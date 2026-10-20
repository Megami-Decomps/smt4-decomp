/* NON_MATCHING: the worker entry function lives right after this one in retail, so retail takes its address pc-relative (`add r0, pc, #60`); built code loads it through the literal pool; retail also returns the worker (its return value is unused by the callers we know) */
#include "common.h"
#include "AsdSDK/AsdDebug.h"

extern "C" {

void *asdMemAlloc(int, int, int, s32 size, int);
void FUN_002c29c4(u32 *list);
void *asdProcessCreateSimple(void (*entry)(void), u32 arg, s32 a, s32 b, void (*onExit)(void), void (*onStart)(void), void *userData);
void asdMemFree(void *block);
void LAB_0010dd0c(void);
void LAB_0011890c(void);
void LAB_001175e4(void);

extern void *g_asdMdlWorker;
extern u32 g_asdMdlList;
extern u32 g_asdMdlList2;
extern const char DAT_004093e0[]; /* __FILE__ of AsdMdlManager.cpp */

/* Starts the model manager's worker: initializes the two model lists and creates the worker
 * with a 4-byte state block, freeing the block again if the worker could not be created. */
void asdMdlManagerStart(u32 arg)
{
    u32 *state;

    asdDebugTrace(DAT_004093e0, 877);
    state = (u32 *)asdMemAlloc(0x100, 0x100, 0, 4, 1);

    if (state != NULL) {
        *state = 0;
        FUN_002c29c4(&g_asdMdlList);
        FUN_002c29c4(&g_asdMdlList2);
        g_asdMdlWorker = asdProcessCreateSimple(LAB_0010dd0c, arg, 0, 0, LAB_0011890c, LAB_001175e4, state);
        if (g_asdMdlWorker == NULL) {
            asdMemFree(state);
        }
    }
}

} /* extern "C" */
