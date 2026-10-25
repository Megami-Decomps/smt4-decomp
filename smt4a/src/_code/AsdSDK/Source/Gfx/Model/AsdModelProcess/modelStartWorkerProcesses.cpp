/* Allocates and starts the model calculator and its two render passes. */
#include "AsdSDK/Source/Gfx/Model/AsdModelProcess.h"
#include "AsdSDK/Source/Sys/Kernel/AsdProcess.h"
#include "AsdSDK/AsdDebug.h"

extern "C" {
void *asdMemoryAllocTracked(u32 heap, u32 alignment, u32 flags, u32 bytes, u32 front);
void asdMemFree(void *memory);
s32 FUN_001400f8(u32 process);
void asdModelProcessShutdown(u32 process);
s32 asdModelRenderLightPassCallback(u32 process);
s32 renderSceneUpdateCallback(u32 process);
void FUN_00142af4(u32 process);
void asdProcessSetAuxiliaryCallback(u32 process, AsdProcFunc callback);
s32 asdMdlManagerStart(s32 group);
extern u32 g_asdModelProcess;

u32 modelStartWorkerProcesses(s32 calculatorGroup, s32 upperGroup, s32 lowerGroup)
{
    asdDebugTrace("c:\\SMT4F\\SMT4F\\AsdSDK\\Source\\Gfx\\Model\\AsdModelProcess.cpp", 144);
    AsdModelProcessSet *workers = (AsdModelProcessSet *)asdMemoryAllocTracked(256, 256, 0, sizeof(AsdModelProcessSet), 1);
    if (workers == NULL) {
        return 0;
    }
    u32 calculator = asdProcessCreateSimple((const s8 *)"AsdModelCalcProc", calculatorGroup, 0, 0, FUN_001400f8, asdModelProcessShutdown, (u32)workers);
    g_asdModelProcess = calculator;
    if (calculator == 0) {
        asdMemFree(workers);
        return 0;
    }
    workers->handle[0] = asdProcessCreateSimple((const s8 *)"AsdModelDrawUpProc", upperGroup, 0, 0, asdModelRenderLightPassCallback, NULL, (u32)workers);
    asdProcessSetAuxiliaryCallback(workers->handle[0], FUN_00142af4);
    workers->handle[2] = asdProcessCreateSimple((const s8 *)"AsdModelDrawDwProc", lowerGroup, 0, 0, renderSceneUpdateCallback, NULL, (u32)workers);
    if (asdMdlManagerStart(calculatorGroup)) {
        return g_asdModelProcess;
    }
    return 0;
}
}
