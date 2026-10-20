#include "shard/PlayScene.h"

extern "C" {

int FUN_00292f4c(PlayScene *scene);
int FUN_00297b94(PlayScene *scene, u32 a, u32 b);
int FUN_0029ca58(void);
int FUN_002a0cc8(int arg);
int timerStart(void *timer, int a, int b);
extern u32 FUN_00297ca4(PlayScene *scene, u32 a);

void FUN_00206270(PlayScene *scene)
{
    u32 value;

    timerStart(scene->timer, 0, 0);
    FUN_0029ca58();
    scene->unk5918 = 4;
    FUN_002a0cc8(0);
    if (scene->mode - 8U <= 5) {
        FUN_00292f4c(scene);
        return;
    }
    value = FUN_00297ca4(scene, 0);
    FUN_00297b94(scene, value, scene->unk305C);
}

} /* extern "C" */
