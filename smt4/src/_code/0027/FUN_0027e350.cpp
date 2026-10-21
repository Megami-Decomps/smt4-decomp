#include "common.h"
namespace { struct Scene { u8 padding[0x2200]; u8 state; }; struct UI { u8 padding[0x20]; Scene *scene; }; }
extern "C" {
extern UI g_btlUi;
s32 playSceneIsFadeInDone(void *scene);
s32 recordQueryStateThree(void *state);
s32 FUN_0027e350(void)
{
    Scene *scene = g_btlUi.scene;
    if (playSceneIsFadeInDone((u8 *)scene + 8) != 0 && recordQueryStateThree(&scene->state) != 0) { return 1; }
    return 0;
}
}
