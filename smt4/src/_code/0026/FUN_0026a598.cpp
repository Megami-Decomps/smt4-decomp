#include "common.h"

extern "C" {

int timerStart(void *timer, int a, int b);

typedef struct Scene {
    /* 0x000 */ u8 unk000[0x648];
    /* 0x648 */ u8 timerA[0x230];
    /* 0x878 */ u8 timerB[0x8C];
    /* 0x904 */ u8 timers[8][0x8C];
} Scene;

extern Scene *DAT_0043da90;

void FUN_0026a598(void)
{
    Scene *scene = DAT_0043da90;
    int i;

    timerStart(DAT_0043da90->timerA, 3, 0);
    i = 0;
    do {
        timerStart(scene->timers[i], 3, 0);
        i++;
    } while (i < 8);
    timerStart(scene->timerB, 3, 0);
}

} /* extern "C" */
