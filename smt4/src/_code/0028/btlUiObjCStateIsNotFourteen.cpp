#include "ui/UiSpriteApi.h"
#include "shard/PlayScene.h"

extern "C" {

u8 btlUiObjCStateIsNotFourteen(PlayScene *scene)
{
    return scene->state != 0xe;
}

} /* extern "C" */
