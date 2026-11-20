#include "ui/UiSpriteApi.h"
#include "shard/PlayScene.h"

extern "C" {

void playSceneSetUiActive(PlayScene *scene, u8 value)
{
    scene->unk3084 = value;
}

} /* extern "C" */
