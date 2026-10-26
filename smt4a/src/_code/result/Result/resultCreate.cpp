#include "shard/X14_EngineUnits.h"
#include "AsdSDK/AsdDebug.h"
#include "AsdSDK/Source/Sys/Kernel/AsdProcess.h"
#include "AsdSDK/AsdMemAlloc.h"

extern "C" {
extern EngineUnitsRef g_engineCleanupOwner;
extern const char DAT_00533cf4[];
extern const char DAT_00533ce8[];
extern const char DAT_00533cd4[];
extern const char DAT_00533cc0[];
extern const char DAT_00533cb0[];
void campCommonBgAcquire();
s32 FUN_00204098(u32 job);
void FUN_00267bf0(u32 job);
s32 FUN_00229324(u32 task);
s32 FUN_00267c70(u32 task);
u32 taskCreateDraw(const char *, s32, u16, u16, AsdProcUpdateFunc, AsdProcFunc, u32, void *);
void FUN_004b6390(EngineUnits *result);
u16 ifTouchGetButtonHelpValue();
void FUN_0020b490(EngineUnits *result, s32 state);

/* Create the result-screen calculation and draw tasks once. */
void resultCreate(s32 mode)
{
    // The draw-task field is beyond the known EngineUnits prefix.
    struct ResultAllocation {
        EngineUnits result;
        u32 unk7f34;
        u32 drawTask;
        u8 unk7f3c[0x1c];
    };
    typedef char ResultAllocationLayout[offsetof(ResultAllocation, drawTask) == 0x7f38 &&
        sizeof(ResultAllocation) == 0x7f58 ? 1 : -1];
    if (g_engineCleanupOwner.instance == NULL) {
        campCommonBgAcquire();
        asdDebugTrace(DAT_00533cf4, 6766);
        g_engineCleanupOwner.instance = static_cast<EngineUnits *>(
            asdMemoryAllocTracked(0x100, 0x100, 0, 0x7f58, 1));
        EngineUnits *result = g_engineCleanupOwner.instance;
        result->job = asdProcessCreateSimple(reinterpret_cast<const s8 *>(DAT_00533ce8), 4, 0, 0, FUN_00204098, FUN_00267bf0, 0);
        taskCreateDraw(DAT_00533cd4, 0x85, 0, 0, FUN_00229324, NULL, 0, reinterpret_cast<void *>(result->job));
        taskCreateDraw(DAT_00533cc0, 0xe1, 0, 0, FUN_00229324, NULL, 0, reinterpret_cast<void *>(result->job));
        reinterpret_cast<ResultAllocation *>(result)->drawTask = taskCreateDraw(DAT_00533cb0, 0xea, 0, 0,
            FUN_00267c70, NULL, 0, reinterpret_cast<void *>(result->job));
        FUN_004b6390(result);
        result->exitMode = mode;
        result->exitSe = 0;
        if (mode == 3) {
            result->exitSe = ifTouchGetButtonHelpValue();
        }
        FUN_0020b490(result, 1);
    }
}
}
