#include "shard/PlayScene.h"

extern "C" {

/* 0 for states 0x22-0x25, otherwise 1. */
u32 FUN_002f25c4(PlayScene *scene)
{
    int state = scene->state;
    u32 result;

    if ((state == 0x22 || state == 0x23) || (state == 0x24 || state == 0x25)) {
        result = 0;
    } else {
        result = 1;
    }
    return result;
}

} /* extern "C" */
