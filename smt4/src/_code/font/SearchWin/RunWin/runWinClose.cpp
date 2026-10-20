/* Run window: moves it to its closing state (3) and notifies its UI. */
#include "common.h"
#include "font/SearchWin/RunWin.h"

extern "C" {

int FUN_002bee58(void *ui, int arg);
int FUN_002bf810(int id);

extern RunWinWork *g_runWin;

void runWinClose(void)
{
    RunWinWork *run = g_runWin;

    if (run->state == 2) {
        run->state = 3;
    } else {
        run->nextState = 3;
    }
    FUN_002bee58(run->ui, 1);
    FUN_002bf810(0x10001fe);
}

} /* extern "C" */
