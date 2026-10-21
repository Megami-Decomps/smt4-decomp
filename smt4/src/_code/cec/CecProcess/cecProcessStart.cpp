/* NON_MATCHING: retail forwards an uninitialized incoming r5 into r1 before operator new, and the child constructor still has a C-form symbol. */
#include "shard/W5_W5Match2_StatusQuery.h"
#include "AsdSDK/AsdDebug.h"

struct CecProcessChild {
    const void* vtable; // 0x00
    u32 fields[4];      // 0x04
};

extern "C" {
extern CecProcessView* g_cecProcess;
void* asdMemAlloc(s32 heap, s32 alignment, s32 mode, u32 size, s32 fromFront);
void memClear(void* memory, u32 size);
void* asdOperatorNew(u32 size);
CecProcessChild* FUN_003bbe6c(CecProcessChild* child);

// Allocate the cleared CEC process block and construct its child object.
void cecProcessStart()
{
    asdDebugTrace("c:\\SMT4\\XRD686\\sdds4\\Patch\\cec\\CecProcess.cpp", 641);
    CecProcessView* process = (CecProcessView*)asdMemAlloc(0x100, 0x100, 0, 0x460, 1);
    memClear(process, 0x460);
    g_cecProcess = process;
    CecProcessChild* child = (CecProcessChild*)asdOperatorNew(sizeof(CecProcessChild));
    if (child != NULL) {
        child = FUN_003bbe6c(child);
    }
    process->process = child;
}
}
