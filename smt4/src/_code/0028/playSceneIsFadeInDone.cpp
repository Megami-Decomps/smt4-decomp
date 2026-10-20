#include "shard/PlayScene.h"

extern "C" {

u8 playSceneIsFadeInDone(PlayScene *scene)
{
    return scene->unk2180 != 5;
}

} /* extern "C" */
