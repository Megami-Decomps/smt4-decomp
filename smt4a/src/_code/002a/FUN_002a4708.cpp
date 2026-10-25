#include "ui/HowToScreen.h"
#include "shard/W5_W5Match6_CallbackController.h"
#include "AsdSDK/Source/Sys/Kernel/AsdProcess.h"

extern "C" {
void *asdOperatorNew(u32 size);
s32 FUN_002840fc(u32 handle);
s32 FUN_002c2bac(u32 handle);
s32 FUN_002c2b88(u32 handle);
u32 taskCreateDraw(const char *name, s32 priority, u16 startDelay, u16 endDelay,
    AsdProcUpdateFunc update, AsdProcFunc destroy, u32 work, u32 process);
void FUN_0049d3f0(HowToScreenWork *work);
void FUN_0049d140(HowToScreenWork *work, s32 state, u8 nextState);

// Start the tutorial controller and its left, right and lower-screen draw passes.
void FUN_002a4708(void)
{
    HowToScreenInstance *work = static_cast<HowToScreenInstance *>(asdOperatorNew(sizeof(HowToScreenInstance)));
    g_callbackController.work = work;
    work->process = asdProcessCreateSimple(reinterpret_cast<const s8 *>("HOW_TO PROC"), 4, 0, 0, FUN_002840fc, NULL, 0);
    taskCreateDraw("HOW_TO UL", 0x7e, 0, 0, FUN_002c2bac, NULL, 0, work->process);
    taskCreateDraw("HOW_TO UR", 0xda, 0, 0, FUN_002c2bac, NULL, 0, work->process);
    taskCreateDraw("HOW_TO DD", 0xeb, 0, 0, FUN_002c2b88, NULL, 0, work->process);
    FUN_0049d3f0(work);
    work->savedButtonHelp = 0;
    FUN_0049d140(work, 2, 0);
}
}
