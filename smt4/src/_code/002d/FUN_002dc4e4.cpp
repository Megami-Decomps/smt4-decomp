#include "shard/PlayScene.h"

extern "C" {

int playSceneSetState(PlayScene *scene, int a, int b);
int FUN_002bee58(void *block, int a);

void FUN_002dc4e4(PlayScene *scene, int flag)
{
    if (flag == 0) {
        scene->unk3081 = 1;
    } else {
        scene->unk3081 = 0;
    }
    scene->unk307F = 0;
    scene->unk305C = 4;
    FUN_002bee58(scene->blockE, 9);
    if (scene->state == 0x17) {
        scene->unk3054 = 0x1f;
        playSceneSetState(scene, 0x18, 1);
        return;
    }
    playSceneSetState(scene, 0x1f, 1);
}

} /* extern "C" */
