#include "font/InfoWin.h"
#include "code/Code0029_Smt4.h"

extern "C" {

int timerStart(void *timer, int a, int b);



void infoWinStartTimer(void)
{
    InfoWindow *obj = g_infoWin;

    g_infoWin->state = 5;
    obj->timer = 0x1e;
    timerStart(&obj->background, 1, 0);
}

} /* extern "C" */
