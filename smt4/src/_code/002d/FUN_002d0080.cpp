#include "shard/PlayScene.h"

extern "C" {

u8 FUN_002d0080(PlayScene *scene)
{
    return scene->state == 6;
}

} /* extern "C" */
