#include "shard/PlayScene.h"

extern "C" {

int FUN_00298140(PlayScene *scene, int a, int b);
int timerStart(void *timer, int a, int b);

void FUN_0028bfe4(PlayScene *scene)
{
    if (scene->state != 0) {
        FUN_00298140(scene, 0x27, 1);
        timerStart(scene->timer, 9, 0);
    }
}

} /* extern "C" */
