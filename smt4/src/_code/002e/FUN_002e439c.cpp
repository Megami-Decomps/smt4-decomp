#include "shard/PlayScene.h"

extern "C" {

s32 FUN_001eb82c(void);
s32 objectPartRunUnlessLocked(PlayScenePart *part);
void battleSelectButtonHelpPreset(bool enable);
void playSceneSetState(PlayScene *scene, s32 state, s32 arg);

/* Counts the scene's used slots, refreshes the button help and switches the scene to state 14. */
void FUN_002e439c(PlayScene *scene)
{

    scene->unk307F = 1;
    scene->slotCount = 0;
    for (s32 i = 0; i < 4; i++) {
        if (scene->slots[i] >= 0) {
            scene->slotCount++;
        }
    }
    if (FUN_001eb82c() == 0) {
        battleSelectButtonHelpPreset(objectPartRunUnlessLocked(&scene->parts[scene->unk305C]) == 0);
    }
    playSceneSetState(scene, 14, 1);
}

} /* extern "C" */
