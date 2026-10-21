#include "shard/PlayScene.h"

/* Reports whether the scene is absent or outside state thirty-one. */
extern "C" s32 sceneIsOutsideClosingState(const PlayScene *scene)
{
    if (scene != NULL && scene->state == 31)
        return 0;
    return 1;
}
