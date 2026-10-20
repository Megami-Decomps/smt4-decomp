#include "shard/PlayScene.h"

extern "C" {

int timerStart(void *timer, int a, int b);

void playSceneTimerSubStartReverse(PlayScene *scene)
{
    timerStart(scene->timerSub, 3, 1);
}

} /* extern "C" */
