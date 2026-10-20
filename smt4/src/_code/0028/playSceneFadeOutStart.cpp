#include "shard/PlayScene.h"

extern "C" {

int timerStart(void *timer, int a, int b);

void playSceneFadeOutStart(PlayScene *scene)
{
    if (scene->unk2180 == 1) {
        scene->unk217C = 0;
        scene->unk2180 = 6;
        timerStart(scene->timerFade, 0, 1);
    }
}

} /* extern "C" */
