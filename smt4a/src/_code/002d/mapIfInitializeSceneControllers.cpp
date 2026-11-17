/* NON_MATCHING: -O2 candidate; map-state, registry, object and zero register roles differ although all82 normalized instructions otherwise agree. */
#include "map/MapIfGlobals.h"
#include "game/GameStateA.h"
#include "shard/W5_W5Match7_SceneState.h"
#include "gfx/ObjectRegistry.h"
#include "Model/MoriModelManager.h"

extern "C" {
void mapIfControllerApply(MapIfModelMarkerA* controller);
}

namespace {
inline MapIfResource* controllerResource(u32 index)
{
    return g_gameState.sceneControllerResources[index];
}

inline void initializeController(MapIfModelMarkerA* controller, MapIfResource* resource)
{
    controller->resource = resource;
    RegisteredObject* object = reinterpret_cast<RegisteredObject*>(resource->handle);
    handleRegistryRegisterObject(g_handleRegistry, object);
    object->flags |= 3;
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

extern "C" void mapIfInitializeSceneControllers(void)
{
    MapIfStateA* state = g_mapIf.state;
    initializeController(&state->modelMarkers[0], controllerResource(0));
    initializeController(&state->modelMarkers[1], controllerResource(1));
    initializeController(&state->modelMarkers[2], controllerResource(2));
}
