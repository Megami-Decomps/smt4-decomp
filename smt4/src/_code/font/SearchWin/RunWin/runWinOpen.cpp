/* NON_MATCHING: the task callbacks are local code labels (LAB_*) that are not decompiled, so their addresses are built differently */
/* Opens the run window: allocates and clears its work area, creates its task and draw task and
 * sets up its sound player and UI. */
#include "common.h"
#include "font/SearchWin/RunWin.h"

extern "C" {

typedef void (*VoidFunc)(void);

int FUN_002bd954(void *ui, int a, int b, void *sound, int c);
int FUN_002bee58(void *ui, int arg);
int FUN_002c312c(void *sound, const void *a, int na, const void *b, int nb, int c, int d, int e, int f, const void *g, int ng);
int memClear(void *ptr, int size);                  /* zero a block */
void *asdMemAlloc(int heap, int align, int arg2, int size, int arg4);
u32 taskCreateDraw(VoidFunc fn, int priority, int arg2, int arg3, VoidFunc cb, int arg5, int arg6, u32 parent);
u32 asdProcessCreateSimple(VoidFunc fn, int priority, int arg2, int arg3, VoidFunc cb, int arg5, int arg6);
void Sound_SoundOnishiPlayer_SoundOnishiPlayer_sub_object(void *player);
void FUN_0018f278(void);
void LAB_0018f5ac(void);
void LAB_00202a8c(void);
void LAB_00202a9c(void);

extern RunWinWork *g_runWin;
extern u8 DAT_00403ac8[];
extern u8 DAT_00403aec[];
extern u8 DAT_00403b10[];

void runWinOpen(void)
{
    RunWinWork *run;

    if (g_runWin == NULL) {
        g_runWin = (RunWinWork *)asdMemAlloc(0x100, 0x100, 0, 0xe4, 1);
    }
    run = g_runWin;
    memClear(run, 0xe4);
    run->task = asdProcessCreateSimple(LAB_00202a8c, 1, 0, 0, LAB_0018f5ac, 0, 0);
    taskCreateDraw(LAB_00202a9c, 0xe9, 0, 0, FUN_0018f278, 0, 0, run->task);
    Sound_SoundOnishiPlayer_SoundOnishiPlayer_sub_object(run->sound);
    FUN_002c312c(run->sound, DAT_00403ac8, 0x24, DAT_00403aec, 0x24, 0, 0, 0, 0, DAT_00403b10, 0x70);
    FUN_002bd954(run->ui, 0xe, 0x87, run->sound, 1);
    FUN_002bee58(run->ui, 0);
}

} /* extern "C" */
