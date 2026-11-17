/* Run window: moves it to its closing state (3) and notifies its UI. */
#include "ui/UiSpriteApi.h"
#include "common.h"
#include "font/SearchWin/RunWin.h"

extern "C" {

int soundPlaySeUnpanned(int id);

extern RunWinWork *g_runWin;

void runWinClose(void)
{
    RunWinWork *run = g_runWin;

    if (run->state == 2) {
        run->state = 3;
    } else {
        run->nextState = 3;
    }
    spriteStartAnimationByIndex(&run->window, 1);
    soundPlaySeUnpanned(0x10001fe);
}

} /* extern "C" */
