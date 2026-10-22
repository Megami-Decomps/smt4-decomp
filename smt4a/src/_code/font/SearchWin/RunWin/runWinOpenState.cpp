/* NON_MATCHING: the task callbacks are local code labels (LAB_*) that are not decompiled, so their addresses are built differently */
/* Run window: sets its text, marks it active and moves it to its opening state (1). */
#include "common.h"
#include "font/SearchWin/RunWin.h"

extern "C" {

int textFormatBuffer(void *text, void (*fn)(void));
int sysPlayVoice(int id);
void LAB_003d8f04(void);

extern RunWinWork *g_runWin;

u32 runWinOpenState(void)
{
    RunWinWork *run = g_runWin;

    textFormatBuffer(run->text, LAB_003d8f04);
    run->active = 1;
    run->state = 1;
    sysPlayVoice(0x10002a9);
    return 1;
}

} /* extern "C" */
