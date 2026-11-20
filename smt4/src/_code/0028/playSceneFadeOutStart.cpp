#include "ui/UiSpriteApi.h"
#include "shard/PlayScene.h"

extern "C" {


void playSceneFadeOutStart(PlayScene *scene)
{
    if (scene->unk2180 == 1) {
        scene->unk217C = 0;
        scene->unk2180 = 6;
        uiSpriteSetKeyframe(&scene->timerFade, 0, 1);
    }
}

} /* extern "C" */
