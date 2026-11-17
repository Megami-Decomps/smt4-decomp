#include "result/Result.h"
#include "AsdSDK/AsdDebug.h"
#include "AsdSDK/Source/Sys/Kernel/AsdProcess.h"
#include "AsdSDK/AsdMemAlloc.h"

extern "C" {
extern const char DAT_00405dfc[];
extern const char DAT_00405df0[];
extern const char DAT_00405ddc[];
extern const char DAT_00405dc8[];
extern const char DAT_00405db8[];
void commonBgAcquire(void);
s32 FUN_0018c0ec(u32 process);
void scrResultDestroy(u32 process);
s32 FUN_001a16c0(u32 process);
s32 FUN_001c8974(u32 process);
u32 taskCreateDraw(const char *name, s32 priority, u16 startDelay, u16 endDelay,
                   AsdProcUpdateFunc draw, AsdProcFunc destroy, u32 work, void *parent);
void FUN_003b7b58(ResultWork *work);
void resultSetMenuState(ResultWork *work, s32 state);

// Create the result calculation process, stereo upper-screen tasks, and lower-screen task once.
void resultCreate(u8 kind)
{
    if (!g_result) {
        commonBgAcquire();
        asdDebugTrace(DAT_00405dfc, 4708);
        g_result = (ResultWork *)asdMemAlloc(0x100, 0x100, 0, sizeof(ResultWork), 1);
        ResultWork *work = g_result;
        work->calculate = asdProcessCreateSimple(reinterpret_cast<const s8 *>(DAT_00405df0), 2, 0, 0, FUN_0018c0ec, scrResultDestroy, 0);
        taskCreateDraw(DAT_00405ddc, 0x80, 0, 0, FUN_001a16c0, NULL, 0, reinterpret_cast<void *>(work->calculate));
        taskCreateDraw(DAT_00405dc8, 0xDE, 0, 0, FUN_001a16c0, NULL, 0, reinterpret_cast<void *>(work->calculate));
        work->drawDown = taskCreateDraw(DAT_00405db8, 0xE6, 0, 0, FUN_001c8974, NULL, 0, reinterpret_cast<void *>(work->calculate));
        FUN_003b7b58(work);
        work->kind = kind;
        resultSetMenuState(work, 1);
    }
}
}
