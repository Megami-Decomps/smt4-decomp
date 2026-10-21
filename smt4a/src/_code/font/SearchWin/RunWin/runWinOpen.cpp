/* NON_MATCHING: the task callbacks are local code labels (LAB_*) that are not decompiled, so their addresses are built differently */
/* Opens the run window: allocates and clears its work area, creates its task and draw task and
 * sets up its sound player and UI. */
#include "common.h"
#include "font/SearchWin/RunWin.h"

extern "C" {

typedef void (*VoidFunc)(void);

int FUN_0014e188(void *ui, int a, int b, void *sound, int c);
int uiSpriteSelectAnim(void *ui, int arg);
int paramsInit(void *sound, const void *a, int na, const void *b, int nb, int c, int d, int e, int f, const void *g, int ng);
int sysMemClear(void *ptr, int size);                  /* zero a block */
void *asdMemoryAllocTracked(int heap, int align, int arg2, int size, int arg4);
u32 taskCreateDraw(VoidFunc fn, int priority, int arg2, int arg3, VoidFunc cb, int arg5, int arg6, u32 parent);
u32 asdProcessCreateSimple(VoidFunc fn, int priority, int arg2, int arg3, VoidFunc cb, int arg5, int arg6);
void paramsClearPacket(void *player);
void FUN_00208650(void);
void LAB_00208984(void);
void LAB_002c7128(void);
void LAB_002c7138(void);

extern RunWinWork *g_runWin;
extern u8 DAT_0052fbfc[];
extern u8 DAT_0052fc20[];
extern u8 DAT_0052fc44[];

void runWinOpen(void)
{
    RunWinWork *run;

    if (g_runWin == NULL) {
        g_runWin = (RunWinWork *)asdMemoryAllocTracked(0x100, 0x100, 0, 0xe4, 1);
    }
    run = g_runWin;
    sysMemClear(run, 0xe4);
    run->task = asdProcessCreateSimple(LAB_002c7128, 3, 0, 0, LAB_00208984, 0, 0);
    taskCreateDraw(LAB_002c7138, 0xed, 0, 0, FUN_00208650, 0, 0, run->task);
    paramsClearPacket(run->sound);
    paramsInit(run->sound, DAT_0052fbfc, 0x24, DAT_0052fc20, 0x24, 0, 0, 0, 0, DAT_0052fc44, 0x70);
    FUN_0014e188(run->ui, 8, 0x87, run->sound, 1);
    uiSpriteSelectAnim(run->ui, 0);
}

} /* extern "C" */
