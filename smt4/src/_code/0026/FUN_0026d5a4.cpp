#include "shard/Scene43dcf0.h"

extern "C" {

int FUN_0026d654(int arg);
int FUN_00293348(int a, int b);
int FUN_00298d28(int a, int b);
int FUN_0029ca58(void);
int timerStart(void *timer, int a, int b);

void FUN_0026d5a4(void)
{
    Scene43dcf0 *scene = DAT_0043dcf0;
    u8 state;
    int i;

    if (DAT_0043dcf0 == NULL) {
        return;
    }
    state = DAT_0043dcf0->state;
    if ((state != 12 && state != 4) && (state != 15)) {
        i = 0;
        do {
            timerStart(scene->timers[i].data, 7, 0);
            i++;
        } while (i < 4);
        timerStart(scene->timerB.data, 7, 0);
    }
    FUN_00298d28(0, 0);
    state = scene->state;
    if ((state != 1 && state != 6) && (state != 7)) {
        FUN_0029ca58();
    }
    FUN_0026d654(1);
    FUN_00293348(0x15, 1);
}

} /* extern "C" */
