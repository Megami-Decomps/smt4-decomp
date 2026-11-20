#include "ui/UiSpriteApi.h"
#include "shard/PlayScene.h"

extern "C" {


void playSceneTimerSubStartReverse(PlayScene *scene)
{
    uiSpriteSetKeyframe(&scene->timerSub, 3, 1);
}

} /* extern "C" */
