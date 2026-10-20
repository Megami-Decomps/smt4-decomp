#include "shard/PlayScene.h"

extern "C" {

int FUN_00292dd0(...);
int FUN_00298140(...);
extern int FUN_001eb82c(void);

void FUN_002dc464(PlayScene *scene)
{
    scene->unk307F = 0;
    if (scene->state == 0) {
        if (FUN_001eb82c() == 0) {
            FUN_00292dd0(0);
        }
        FUN_00298140(scene, 0xe, 1);
        return;
    }
    if (scene->state == 0x17) {
        scene->unk3054 = 0x1e;
        FUN_00298140(scene, 0x18, 1);
        return;
    }
    FUN_00298140(scene, 0x1e, 1);
}

} /* extern "C" */
