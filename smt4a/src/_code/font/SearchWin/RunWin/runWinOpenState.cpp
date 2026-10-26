/* Run window: sets its text, marks it active and moves it to its opening state (1). */
#include "common.h"
#include "font/SearchWin/RunWin.h"

extern "C" {

int textFormatBuffer(void *text, const char *format);
int sysPlayVoice(int id);

extern RunWinWork *g_runWin;

u32 runWinOpenState(void)
{
    RunWinWork *run = g_runWin;

    textFormatBuffer(run->text, "\x82\x60\x82\x83\x82\x94\x82\x89\x82\x96\x82\x81\x82\x94\x82\x89\x82\x8e\x82\x87\x81\x40\n");
    u32 result = 1;
    run->active = result;
    run->state = result;
    sysPlayVoice(0x10002a9);
    return result;
}

} /* extern "C" */
