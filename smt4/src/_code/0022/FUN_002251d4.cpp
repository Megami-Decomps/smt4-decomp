#include "shard/PlayScene.h"

extern "C" {

int playSceneSetState(PlayScene *scene, int a, int b);
int buttonHelpGetMode(void);
int buttonHelpSetPreset(void);

void FUN_002251d4(PlayScene *scene)
{
    buttonHelpGetMode();
    buttonHelpSetPreset();
    playSceneSetState(scene, scene->mode, 1);
}

} /* extern "C" */
