#include "shard/PlayScene.h"

extern "C" {

int timerStart(void *timer, int a);

void playSceneFadeInStart(PlayScene *scene)
{
    if (scene->unk2180 == 0) {
        scene->unk217C = 0;
        scene->unk2180 = 5;
        timerStart(scene->timerFade, 0);
    }
}

} /* extern "C" */
