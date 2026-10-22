#include "common.h"
namespace { struct Scene { u32 id, state, counter; u8 padding[0x4c]; float duration; }; struct Game { u8 padding[0x17c]; u8 flag; }; }
extern "C" {
extern Scene *g_lmapScene;
extern Game g_gameState;
void lmapSetSceneId(u32 sceneId)
{
    Scene *scene = g_lmapScene;
    if (scene->id != sceneId) {
        scene->id = sceneId;
        scene->state = 0;
        scene->counter = 0;
        if (sceneId == 1) { scene->duration = 5.0f; }
        else if (sceneId != 3) { g_gameState.flag = 0; }
    }
}
}
