#include "ui/UiSpriteApi.h"
#include "shard/PlayScene.h"

extern "C" {


void playSceneTimerSubStartReverse(PlayScene *scene)
{
    timerStart((UiSpriteState *)scene->timerSub, 3, 1);
}

} /* extern "C" */
