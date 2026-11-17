#include "gamedata/MapSaveBlockA.h"
#include "shard/W5_W5Match7_SceneState.h"
#include "map/LmapGlobals.h"

extern "C" {

s32 scrGetArg(s32 index);

/* Resets the gameFlagsGetBlock state and starts mode 13 with the scrGetArg value as its argument; always returns 1. */
s32 FUN_0035cfd4(void)
{
    LmapSceneA *scene;
    s32 value;

    gameFlagsGetBlock();
    value = scrGetArg(0);
    scene = g_lmapScene;
    scene->unk228 = value;
    scene->movementState = 13;
    scene->unk238 = value;
    scene->unk1D4 = 0;
    return 1;
}

}
