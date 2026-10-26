#include "shard/W5_W5Match2_StatusQuery.h"
#include "AsdSDK/AsdDebug.h"
#include "AsdSDK/AsdMemUtil.h"
#include "AsdSDK/AsdMemAlloc.h"

struct CecProcessChild {
    const void* vtable; // 0x00
    u32 fields[4];      // 0x04
};

extern "C" {
extern CecProcessView* g_cecProcess;
void* asdOperatorNew(u32 size, void* owner);
CecProcessChild* _ZN9Obj420a1cC1Ev(CecProcessChild* child);

// Allocate the cleared CEC process block and construct its child object.
void cecProcessStart()
{
    asdDebugTrace("c:\\SMT4\\XRD686\\sdds4\\Patch\\cec\\CecProcess.cpp", 641);
    CecProcessView* process = (CecProcessView*)asdMemAlloc(0x100, 0x100, 0, 0x460, 1);
    memClear(process, 0x460);
    g_cecProcess = process;
    void* owner;
    CecProcessChild* child = (CecProcessChild*)asdOperatorNew(sizeof(CecProcessChild), owner);
    if (child != NULL) {
        child = _ZN9Obj420a1cC1Ev(child);
    }
    process->process = child;
}
}
