/* NON_MATCHING: task names, debug trace and callbacks now match retail; retail derives the three parameter tables from one data base (DAT_..b10 - 0x24 - 0x24: same-file data) and loads a float 1.0f argument for spriteStartAnimation that is not passed here. */
/* Opens the run window: allocates and clears its work area, creates its task and draw task and
 * sets up its sound player and UI. */
#include "shard/W6_W6Match8_UiResourceParameters.h"
#include "common.h"
#include "font/SearchWin/RunWin.h"
#include "AsdSDK/Source/Sys/Kernel/AsdProcess.h"
#include "AsdSDK/AsdDebug.h"
#include "AsdSDK/AsdMemAlloc.h"

extern "C" {

typedef void (*VoidFunc)(void);

int FUN_0014e188(void *ui, int a, int b, void *sound, int c);
int uiSpriteSelectAnim(void *ui, int arg);

int sysMemClear(void *ptr, int size);                  /* zero a block */
u32 taskCreateDraw(const char *name, int priority, int arg2, int arg3, VoidFunc cb, int arg5, int arg6, u32 parent);
void paramsClearPacket(void *player);
void FUN_00208650(void);
void FUN_00208984(void);

extern RunWinWork *g_runWin;
extern u8 DAT_0052fbfc[];
extern u8 DAT_0052fc20[];
extern u8 DAT_0052fc44[];

void runWinOpen(void)
{
    RunWinWork *run;

    if (g_runWin == NULL) {
        asdDebugTrace("c:\\SMT4F\\SMT4F\\sdds4\\program\\font\\SearchWin\\RunWin.cpp", 136);
        g_runWin = (RunWinWork *)asdMemoryAllocTracked(0x100, 0x100, 0, 0xe4, 1);
    }
    run = g_runWin;
    sysMemClear(run, 0xe4);
    run->task = asdProcessCreateSimple(reinterpret_cast<const s8 *>("RunWin Calc"), 3, 0, 0, reinterpret_cast<AsdProcUpdateFunc>(FUN_00208984), 0, 0);
    taskCreateDraw("RunWin DrawDown", 0xed, 0, 0, FUN_00208650, 0, 0, run->task);
    paramsClearPacket(run->sound);
    paramsInit(reinterpret_cast<UiResourceParameters *>(run->sound), DAT_0052fbfc, 0x24, DAT_0052fc20, 0x24, 0, 0, 0, 0, DAT_0052fc44, 0x70);
    FUN_0014e188(run->ui, 8, 0x87, run->sound, 1);
    uiSpriteSelectAnim(run->ui, 0);
}

} /* extern "C" */
