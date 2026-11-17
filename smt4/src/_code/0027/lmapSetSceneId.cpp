#include "common.h"
#include "map/LmapGlobals.h"
#include "game/GameState.h"
namespace { struct Game { u8 padding[0x17c]; u8 flag; }; }
extern "C" {
void lmapSetSceneId(u32 sceneId)
{
    LmapScene *scene = g_lmapScene;
    if (scene->mode != sceneId) {
        scene->mode = sceneId;
        scene->state = 0;
        scene->stateTime = 0;
        if (sceneId == 1) { scene->moveSpeed = 5.0f; }
        else if (sceneId != 3) { g_gameState.event.encounterSourceActive = 0; }
    }
}
}
