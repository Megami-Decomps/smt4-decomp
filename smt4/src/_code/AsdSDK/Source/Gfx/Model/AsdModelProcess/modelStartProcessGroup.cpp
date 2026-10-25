#include "AsdSDK/Source/Gfx/Model/AsdModelProcess.h"
#include "AsdSDK/Source/Sys/Kernel/AsdProcess.h"
#include "AsdSDK/AsdDebug.h"

extern "C" {
extern const char DAT_00409440[];
extern u32 g_asdModelProcess;
void* asdMemAlloc(u32 heap, u32 alignClass, u32 flags, u32 size, u32 fromFront);
void asdMemFree(void* memory);
void asdProcessSetAuxiliaryCallback(u32 process, AsdProcFunc callback);
u32 asdMdlManagerStart(u32 priority);
s32 FUN_0010af48(u32 process);
s32 FUN_0010b854(u32 process);
s32 FUN_0010b844(u32 process);
void FUN_0010d2ac(u32 process);
void asdModelProcessShutdown(u32 process);

u32 modelStartProcessGroup(u32 calcPriority, u32 drawUpPriority, u32 drawDownPriority)
{
    asdDebugTrace(DAT_00409440, 144);
    AsdModelProcessSet* work = static_cast<AsdModelProcessSet*>(
        asdMemAlloc(0x100, 0x100, 0, sizeof(AsdModelProcessSet), 1));
    if (!work) {
        return 0;
    }
    g_asdModelProcess = asdProcessCreateSimple(reinterpret_cast<const s8 *>("AsdModelCalcProc"), calcPriority, 0, 0, FUN_0010af48, asdModelProcessShutdown, reinterpret_cast<u32>(work));
    if (!g_asdModelProcess) {
        asdMemFree(work);
        return 0;
    }
    work->handle[0] = asdProcessCreateSimple(reinterpret_cast<const s8 *>("AsdModelDrawUpProc"), drawUpPriority, 0, 0, FUN_0010b854, 0, reinterpret_cast<u32>(work));
    asdProcessSetAuxiliaryCallback(work->handle[0], FUN_0010d2ac);
    work->handle[2] = asdProcessCreateSimple(reinterpret_cast<const s8 *>("AsdModelDrawDwProc"), drawDownPriority, 0, 0, FUN_0010b844, 0, reinterpret_cast<u32>(work));
    return asdMdlManagerStart(calcPriority) ? g_asdModelProcess : 0;
}
}
