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

void FUN_002bd954(void *ui, s32 kind, s32 count, UiResourceParameters *resources, u16 flags, f32 speed);
int spriteStartAnimationByIndex(void *ui, int arg);

int memClear(void *ptr, int size);                  /* zero a block */
u32 taskCreateDraw(const char *name, int priority, int arg2, int arg3, VoidFunc cb, int arg5, int arg6, u32 parent);
void drawParameterBlockClear(void *player);
void FUN_0018f278(void);
void runWindowUpdate(void);

extern RunWinWork *g_runWin;
/* The run window's sprite resource packets, in retail's order (0x24, 0x24 and 0x70 bytes). */
static const u32 sRunWinPacketA[9] = {
    0, 0, 0, 0x14a, 0, 8, 0, 0xfeb6, 4,
};
static const u32 sRunWinPacketB[9] = {
    0x3f800000, 0x3f800000, 0, 0x3f800000, 0, 4, 0, 0, 0,
};
static const u32 sRunWinPacketC[28] = {
    1, 0, 0xfffffffd, 0, 0, 0xfffffffd, 0, 0xffffffff, 0, 0xffffffff, 0xffffffff, 0, 0xffffffff, 0,
    2, 0, 0xfffffffd, 1, 0, 0xfffffffd, 0, 0xffffffff, 0, 0xffffffff, 0xffffffff, 0, 0xffffffff, 0,
};

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
    paramsInit(reinterpret_cast<UiResourceParameters *>(run->sound), sRunWinPacketA, 0x24, sRunWinPacketB, 0x24, 0, 0, 0, 0, sRunWinPacketC, 0x70);
    FUN_002bd954(run->ui, 0xe, 0x87, reinterpret_cast<UiResourceParameters *>(run->sound), 1, 1.0f);
    spriteStartAnimationByIndex(run->ui, 0);
}

} /* extern "C" */
