#include "shard/PlayScene.h"

extern "C" {

int timerStart(void *timer, int a, int b);

void FUN_0028be40(PlayScene *scene)
{
    timerStart(scene->timerSub, 3, 0);
}

} /* extern "C" */
