/* Run window: moves it to its closing state (3) and notifies its UI. */
#include "ui/UiSpriteApi.h"
#include "common.h"
#include "font/SearchWin/RunWin.h"

extern "C" {

int sysPlayVoice(int id);

extern RunWinWork *g_runWin;

void runWinClose(void)
{
    RunWinWork *run = g_runWin;

    if (run->state == 2) {
        run->state = 3;
    } else {
        run->nextState = 3;
    }
    uiSpriteSelectAnim(&run->window, 1);
    sysPlayVoice(0x10002aa);
}

} /* extern "C" */
