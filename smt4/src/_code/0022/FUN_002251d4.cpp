#include "shard/PlayScene.h"

extern "C" {

int playSceneSetState(PlayScene *scene, int a, int b);
int FUN_002a0cb0(void);
int buttonHelpSetPreset(void);

void FUN_002251d4(PlayScene *scene)
{
    FUN_002a0cb0();
    buttonHelpSetPreset();
    playSceneSetState(scene, scene->mode, 1);
}

} /* extern "C" */
