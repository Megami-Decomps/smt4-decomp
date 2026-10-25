#include "shard/W5_W5Match6_CallbackController.h"
#include "ui/HowToScreen.h"
#include "AsdSDK/Source/Sys/Kernel/AsdProcess.h"


extern "C" {
extern const char DAT_0052cf40[];
extern const char DAT_0052cf34[];
extern const char DAT_0052cf28[];
extern const char DAT_0052cf1c[];
void *asdOperatorNew(u32 size);
s32 FUN_002840fc(u32 handle);
s32 FUN_002c2bac(u32 handle);
s32 FUN_002c2b88(u32 handle);
u32 taskCreateDraw(const char *name, s32 priority, u16 startDelay, u16 endDelay,
    AsdProcUpdateFunc update, AsdProcFunc destroy, u32 work, u32 process);
void FUN_0049d3f0(HowToScreenWork *work);
u32 ifTouchGetButtonHelpValue(void);
s32 campIsState85(void);
void FUN_0049d140(HowToScreenWork *work, s32 state, u8 nextState);

// Create the how-to update process and the three screen-specific draw tasks.
void FUN_00348d7c(s32 mode)
{
    HowToScreenInstance *work = static_cast<HowToScreenInstance *>(asdOperatorNew(sizeof(HowToScreenInstance)));
    g_callbackController.work = work;
    work->process = asdProcessCreateSimple(reinterpret_cast<const s8 *>(DAT_0052cf40), 4, 0, 0, FUN_002840fc, NULL, 0);
    taskCreateDraw(DAT_0052cf34, 0x81, 0, 0, FUN_002c2bac, NULL, 0, work->process);
    taskCreateDraw(DAT_0052cf28, 0xDD, 0, 0, FUN_002c2bac, NULL, 0, work->process);
    taskCreateDraw(DAT_0052cf1c, 0xEB, 0, 0, FUN_002c2b88, NULL, 0, work->process);
    FUN_0049d3f0(work);
    work->savedButtonHelp = ifTouchGetButtonHelpValue();
    work->entryMode = mode;
    work->alternate = campIsState85() != 0 || mode == 3;
    FUN_0049d140(work, 7, 0);
}
}
