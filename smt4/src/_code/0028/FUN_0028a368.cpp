#include "shard/Scene43dcf0.h"

extern "C" {

int FUN_0026c214(void);
int FUN_00293348(int a, int b);
int timerStart(void *timer, int a, int b);

void FUN_0028a368(int reset)
{
    Scene43dcf0 *scene = DAT_0043dcf0;
    int i;

    if (DAT_0043dcf0 != NULL) {
        DAT_0043dcf0->unk34 = 0;
        scene->unk35 = 0;
        if (reset != 0) {
            i = 0;
            do {
                timerStart(scene->timers[i].data, 4, 0);
                i++;
            } while (i < 4);
            if (scene->unk42 != 0) {
                timerStart(scene->timerB.data, 6, 0);
            } else {
                timerStart(scene->timerB.data, 4, 0);
            }
        }
        if (scene->state != 0 && scene->state != 1) {
            FUN_0026c214();
        }
        FUN_00293348(0, 1);
    }
}

} /* extern "C" */
