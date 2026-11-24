#include "map/MapIfGlobals.h"
#include "game/GameStateA.h"
#include "shard/W5_W5Match7_SceneState.h"
#include "Model/MoriModelRegistration.h"

extern "C" {
void mapIfControllerApply(MapIfModelMarkerA *controller);
}

namespace {
static __inline MoriModelContent *controllerResource(u32 index)
{
    return g_gameState.sceneControllerResources[index];
}

static __inline void initializeController(MapIfModelMarkerA *controller, MoriModelContent *resource)
{
    controller->resource = resource;
    moriModelRegisterSceneContent(resource);
    controller->active = 1;
    controller->state = 0;
    controller->flags = 0;
    controller->first = 0;
    controller->second = 0;
    controller->position[0] = 0.0f;
    controller->position[1] = 0.0f;
    controller->position[2] = 0.0f;
    controller->heading = 0.0f;
    controller->elapsed = 0;
    mapIfControllerApply(controller);
}
}

/* Binds the three map-interface model markers to the scene's controller resources and resets them. */
extern "C" void mapIfInitializeSceneControllers(void)
{
    MapIfStateA *state = g_mapIf.state;
    initializeController(&state->modelMarkers[0], controllerResource(0));
    initializeController(&state->modelMarkers[1], controllerResource(1));
    initializeController(&state->modelMarkers[2], controllerResource(2));
}
