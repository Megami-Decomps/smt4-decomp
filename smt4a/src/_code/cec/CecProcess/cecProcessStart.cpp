#include "cec/CecProcessGlobal.h"
#include "AsdSDK/AsdDebug.h"
#include "AsdSDK/AsdMemAlloc.h"
#include "AsdSDK/Source/Sys/Mem/AsdMemory.h"

extern "C" {

extern void sysMemClear(void *block, u32 size);
extern void *_ZN9Obj557ec0C1Ev(void *object);

/* Allocates and clears the cec process state, makes it the current one and builds its sub-object. */
void cecProcessStart(void)
{
    CecProcessA *process;
    void *sub;
    void *owner;

    asdDebugTrace("c:\\SMT4F\\SMT4F\\sdds4\\program\\cec\\CecProcess.cpp", 654);
    process = (CecProcessA *)asdMemoryAllocTracked(0x100, 0x100, 0, 0xd68, 1);
    sysMemClear(process, 0xd68);
    g_cecProcess = process;
    sub = asdOperatorNew(20, owner);
    if (sub != NULL) {
        sub = _ZN9Obj557ec0C1Ev(sub);
    }
    process->messageBox = static_cast<Obj557ec0 *>(sub);
}

} /* extern "C" */
