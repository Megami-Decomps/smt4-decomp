/* NON_MATCHING: the task callbacks are local code labels (LAB_*) that are not decompiled, so their addresses are built differently */
/* Run window: sets its text, marks it active and moves it to its opening state (1). */
#include "common.h"
#include "font/SearchWin/RunWin.h"

extern "C" {

int FUN_002be624(void *text, void (*fn)(void));
int FUN_002bf810(int id);
void LAB_0032fcf8(void);

extern RunWinWork *g_runWin;

u32 runWinOpenState(void)
{
    RunWinWork *run = g_runWin;

    FUN_002be624(run->text, LAB_0032fcf8);
    run->active = 1;
    run->state = 1;
    FUN_002bf810(0x10001fd);
    return 1;
}

} /* extern "C" */
