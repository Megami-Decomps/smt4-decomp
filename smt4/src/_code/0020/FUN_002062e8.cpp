#include "shard/PlayScene.h"

extern "C" {

/* 1 for the states in which the scene accepts input. */
u32 FUN_002062e8(PlayScene *scene)
{
    s32 state = scene->state;
    u32 result;

    if ((((state == 0 || state == 0x12) || (state == 0x13 || state == 0x14)) ||
         (state == 0x15 || state == 0x16)) ||
        (((state == 0x17 || state == 0x19 || (state == 0x1a || state == 0x1b)) ||
          (state == 6 || state == 0x28)))) {
        result = 1;
    } else {
        result = 0;
    }
    return result;
}

} /* extern "C" */
