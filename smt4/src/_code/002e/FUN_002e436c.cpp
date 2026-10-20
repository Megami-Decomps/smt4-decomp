#include "shard/PlayScene.h"

extern "C" {

int playSceneSetState(PlayScene *scene, int a, int b);
int timerStart(void *timer, int a, int b);

void FUN_002e436c(PlayScene *scene)
{
    timerStart(scene->timerC, 0xd, 0);
    playSceneSetState(scene, 0xe, 1);
}

} /* extern "C" */
