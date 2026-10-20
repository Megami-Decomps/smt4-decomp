#include "shard/PlayScene.h"

extern "C" {

u8 FUN_00206344(PlayScene *scene, u32 value)
{
    return scene->unk3060 == value;
}

} /* extern "C" */
