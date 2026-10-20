#include "shard/PlayScene.h"

extern "C" {

int timerStart(void *timer, int a, int b);

void playSceneTimerSubStart(PlayScene *scene)
{
    timerStart(scene->timerSub, 3, 0);
}

} /* extern "C" */
