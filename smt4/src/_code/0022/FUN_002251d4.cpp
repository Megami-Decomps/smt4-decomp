#include "shard/PlayScene.h"

extern "C" {

int FUN_00298140(PlayScene *scene, int a, int b);
int FUN_002a0cb0(void);
int FUN_002b8838(void);

void FUN_002251d4(PlayScene *scene)
{
    FUN_002a0cb0();
    FUN_002b8838();
    FUN_00298140(scene, scene->mode, 1);
}

} /* extern "C" */
