#include "shard/PlayScene.h"
#include "code/Code0028_Smt4.h"

extern "C" {

int FUN_00297b94(PlayScene *scene, u32 a, u32 b);
int playSceneSetState(...);
extern int FUN_0023dcb8(void);
extern u32 FUN_00297ca4(PlayScene *scene, u32 a);

void FUN_0028cf30(PlayScene *scene, int value, int flag)
{
    u32 result;

    scene->unk305C = value;
    if (flag == 0) {
        playSceneSetState(scene, 0x29, 1);
        return;
    }
    if ((value == 0) && (FUN_0023dcb8() != 0)) {
        playSceneSetState(scene, 1, 1);
        result = FUN_00297ca4(scene, 1);
        FUN_00297b94(scene, result, scene->unk305C);
        return;
    }
    playSceneSetState(scene, 9, 1);
}

} /* extern "C" */
