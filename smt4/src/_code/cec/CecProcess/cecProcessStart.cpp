#include "cec/CecProcessGlobal.h"
#include "AsdSDK/AsdDebug.h"
#include "AsdSDK/AsdMemUtil.h"
#include "AsdSDK/AsdMemAlloc.h"

extern "C" {
void* asdOperatorNew(u32 size, void* owner);
Obj420a1c* _ZN9Obj420a1cC1Ev(Obj420a1c* child);

// Allocate the cleared CEC process block and construct its child object.
void cecProcessStart()
{
    asdDebugTrace("c:\\SMT4\\XRD686\\sdds4\\Patch\\cec\\CecProcess.cpp", 641);
    CecProcess* process = (CecProcess*)asdMemAlloc(0x100, 0x100, 0, sizeof(CecProcess), 1);
    memClear(process, sizeof(CecProcess));
    g_cecProcess = process;
    void* owner;
    Obj420a1c* child = (Obj420a1c*)asdOperatorNew(20, owner); /* retail allocates 20 bytes for it */
    if (child != NULL) {
        child = _ZN9Obj420a1cC1Ev(child);
    }
    process->messageBox = child;
}
}
