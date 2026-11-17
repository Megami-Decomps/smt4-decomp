#include "ui/UiSpriteApi.h"
#include "shard/PlayScene.h"

extern "C" {


void playSceneTimerSubStart(PlayScene *scene)
{
    timerStart(&scene->timerSub, 3, 0);
}

} /* extern "C" */
