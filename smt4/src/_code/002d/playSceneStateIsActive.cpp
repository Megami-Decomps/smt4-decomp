#include "shard/PlayScene.h"

extern "C" {

/* 1 for states 3-5. */
u32 playSceneStateIsActive(PlayScene *scene)
{
    int state = scene->state;
    u32 result;

    if ((state == 3 || state == 4) || (state == 5)) {
        result = 1;
    } else {
        result = 0;
    }
    return result;
}

} /* extern "C" */
