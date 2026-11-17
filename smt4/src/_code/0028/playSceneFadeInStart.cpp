#include "ui/UiSpriteApi.h"
#include "shard/PlayScene.h"

extern "C" {

void playSceneFadeInStart(PlayScene *scene)
{
    if (scene->unk2180 == 0) {
        scene->unk217C = 0;
        scene->unk2180 = 5;
        timerStart(&scene->timerFade, 0, 0);
    }
}

} /* extern "C" */
