#include "ui/UiSpriteApi.h"
#include "shard/PlayScene.h"

extern "C" {


void playSceneTimerSubStart(PlayScene *scene)
{
    timerStart((UiSpriteState *)scene->timerSub, 3, 0);
}

} /* extern "C" */
