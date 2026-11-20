#include "ui/UiSpriteApi.h"
#include "shard/PlayScene.h"
#include "shard/W6_W6Match2_TextureHolder.h"

extern "C" {

int playSceneSetState(PlayScene *scene, int a, int b);

void btlUiObjCResetToState27(PlayScene *scene)
{
    if (scene->state != 0) {
        playSceneSetState(scene, 0x27, 1);
        uiSpriteSetKeyframe(&scene->timer, 9, 0);
    }
}

} /* extern "C" */
