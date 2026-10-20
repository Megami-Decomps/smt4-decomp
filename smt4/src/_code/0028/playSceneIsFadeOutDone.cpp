#include "shard/PlayScene.h"

extern "C" {

u8 playSceneIsFadeOutDone(PlayScene *scene)
{
    return scene->unk2180 != 6;
}

} /* extern "C" */
