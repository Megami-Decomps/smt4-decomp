/* NON_MATCHING: retail wraps the allocator call in an inlined debug trace (file/line pool loads and a nop) that plain source cannot express, which shifts register use and scheduling; retail 61 vs built 38 rows, 60 diff lines. */
#include "common.h"

extern "C" {

void *asdMemoryAllocTracked(int, int, int, s32 size, int);
void FUN_0014aa88(u32 *list);
void *asdProcessCreateSimple(void (*entry)(void), u32 arg, s32 a, s32 b, void (*onExit)(void), void (*onStart)(void), void *userData);
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
    u32 *state = (u32 *)asdMemoryAllocTracked(0x100, 0x100, 0, 4, 1);

    if (state != NULL) {
        *state = 0;
        FUN_0014aa88(&g_asdMdlList);
        FUN_0014aa88(&g_asdMdlList2);
        g_asdMdlWorker = asdProcessCreateSimple(LAB_0014340c, arg, 0, 0, LAB_00151d9c, asdMdlManagerReleaseBlock, state);
        if (g_asdMdlWorker == NULL) {
            asdMemFree(state);
        }
    }
}

} /* extern "C" */
