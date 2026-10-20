#include "shard/PlayScene.h"

extern "C" {

int playSceneSetState(PlayScene *scene, int a, int b);

void FUN_00225200(PlayScene *scene)
{
    playSceneSetState(scene, scene->unk3050, 1);
}

} /* extern "C" */
