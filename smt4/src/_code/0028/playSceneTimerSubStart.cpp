#include "ui/UiSpriteApi.h"
#include "shard/PlayScene.h"

extern "C" {


void playSceneTimerSubStart(PlayScene *scene)
{
    uiSpriteSetKeyframe(&scene->timerSub, 3, 0);
}

} /* extern "C" */
