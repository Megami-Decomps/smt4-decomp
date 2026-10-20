#include "shard/PlayScene.h"

extern "C" {

int FUN_00298140(PlayScene *scene, int a, int b);

void FUN_00225200(PlayScene *scene)
{
    FUN_00298140(scene, scene->unk3050, 1);
}

} /* extern "C" */
