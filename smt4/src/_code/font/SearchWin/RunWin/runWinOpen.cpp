/* NON_MATCHING: task names, debug trace and callbacks now match retail; retail derives the three parameter tables from one data base (DAT_..b10 - 0x24 - 0x24: same-file data) and loads a float 1.0f argument for spriteStartAnimation that is not passed here. */
/* Opens the run window: allocates and clears its work area, creates its task and draw task and
 * sets up its sound player and UI. */
#include "shard/W6_W6Match8_UiResourceParameters.h"
#include "common.h"
#include "font/SearchWin/RunWin.h"
#include "AsdSDK/Source/Sys/Kernel/AsdProcess.h"
#include "AsdSDK/AsdDebug.h"
#include "bible/bibleAnalyze.h"

extern "C" {

typedef void (*VoidFunc)(void);

int FUN_002bd954(void *ui, int a, int b, void *sound, int c);
int spriteStartAnimationByIndex(void *ui, int arg);

int memClear(void *ptr, int size);                  /* zero a block */
u32 taskCreateDraw(const char *name, int priority, int arg2, int arg3, VoidFunc cb, int arg5, int arg6, u32 parent);
void drawParameterBlockClear(void *player);
void FUN_0018f278(void);
void runWindowUpdate(void);

extern RunWinWork *g_runWin;
extern u8 DAT_00403ac8[];
extern u8 DAT_00403aec[];
extern u8 DAT_00403b10[];

void runWinOpen(void)
{
    RunWinWork *run;

    if (g_runWin == NULL) {
        asdDebugTrace("c:\\SMT4\\XRD686\\sdds4\\Patch\\font\\SearchWin\\RunWin.cpp", 134);
        g_runWin = (RunWinWork *)asdMemAlloc(0x100, 0x100, 0, 0xe4, 1);
    }
    run = g_runWin;
    memClear(run, 0xe4);
    run->task = asdProcessCreateSimple(reinterpret_cast<const s8 *>("RunWin Calc"), 1, 0, 0, reinterpret_cast<AsdProcUpdateFunc>(runWindowUpdate), 0, 0);
    taskCreateDraw("RunWin DrawDown", 0xe9, 0, 0, FUN_0018f278, 0, 0, run->task);
    drawParameterBlockClear(run->sound);
    paramsInit(reinterpret_cast<UiResourceParameters *>(run->sound), DAT_00403ac8, 0x24, DAT_00403aec, 0x24, 0, 0, 0, 0, DAT_00403b10, 0x70);
    FUN_002bd954(run->ui, 0xe, 0x87, run->sound, 1);
    spriteStartAnimationByIndex(run->ui, 0);
}

} /* extern "C" */
