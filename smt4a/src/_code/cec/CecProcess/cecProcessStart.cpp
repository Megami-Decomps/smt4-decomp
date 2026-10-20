/* NON_MATCHING: retail passes a never-assigned register (r5) as a second argument of the operator new call. */
#include "common.h"
#include "AsdSDK/AsdDebug.h"

extern "C" {

typedef struct CecProcess {
    u8 unk00[4];
    void *sub; /* 0x04 */
} CecProcess;

extern CecProcess *g_cecProcess;

extern void *asdMemoryAllocTracked(int heap, int alignClass, int unk08, u32 size, int fromFront);
extern void sysMemClear(void *block, u32 size);
extern void *asdOperatorNew(u32 size);
extern void *FUN_004bb440(void *object);

/* Allocates and clears the cec process state, makes it the current one and builds its sub-object. */
void cecProcessStart(void)
{
    CecProcess *process;
    void *sub;

    asdDebugTrace("c:\\SMT4F\\SMT4F\\sdds4\\program\\cec\\CecProcess.cpp", 654);
    process = (CecProcess *)asdMemoryAllocTracked(0x100, 0x100, 0, 0xd68, 1);
    sysMemClear(process, 0xd68);
    g_cecProcess = process;
    sub = asdOperatorNew(20);
    if (sub != NULL) {
        sub = FUN_004bb440(sub);
    }
    process->sub = sub;
}

} /* extern "C" */
