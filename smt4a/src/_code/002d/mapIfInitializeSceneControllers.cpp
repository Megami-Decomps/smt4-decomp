/* NON_MATCHING: -O2 candidate; map-state, registry, object and zero register roles differ although all82 normalized instructions otherwise agree. */
#include "map/mapIf.h"
#include "shard/W5_W5Match7_SceneState.h"

struct MapIfSceneObject {
    /* 0x00 */ u8 unk00[4];
    /* 0x04 */ u32 flags;
};
struct MapIfController {
    /* 0x00 */ u8 active;
    /* 0x01 */ u8 visible;
    /* 0x02 */ u8 dirty;
    /* 0x03 */ u8 unk03;
    /* 0x04 */ u32 unk04;
    /* 0x08 */ u32 unk08;
    /* 0x0c */ f32 values[4];
    /* 0x1c */ u32 animation;
    /* 0x20 */ MapIfResource* resource;
};
struct MapIfResourceState {
    /* 0x000 */ u8 unk000[0x534];
    /* 0x534 */ MapIfResource* resources[3];
};

extern "C" {
extern MapIfGlobalsA g_mapIf;
extern void* g_handleRegistry;
void handleRegistryRegisterObject(void* registry, MapIfSceneObject* object);
void mapIfControllerApply(MapIfController* controller);
}

namespace {
inline MapIfResource* controllerResource(u32 index)
{
    return reinterpret_cast<const MapIfResourceState*>(&g_gameState)->resources[index];
}

inline void initializeController(MapIfController* controller, MapIfResource* resource)
{
    controller->resource = resource;
    MapIfSceneObject* object = reinterpret_cast<MapIfSceneObject*>(resource->handle);
    handleRegistryRegisterObject(g_handleRegistry, object);
    object->flags |= 3;
    controller->active = 1;
    controller->visible = 0;
    controller->dirty = 0;
    controller->unk04 = 0;
    controller->unk08 = 0;
    for (u32 index = 0; index < 4; ++index) {
        controller->values[index] = 0.0f;
    }
    controller->animation = 0;
    mapIfControllerApply(controller);
}
}

extern "C" void mapIfInitializeSceneControllers(void)
{
    MapIfStateA* state = g_mapIf.state;
    MapIfController* controllers = reinterpret_cast<MapIfController*>(state->unkCC7C);
    initializeController(&controllers[0], controllerResource(0));
    initializeController(&controllers[1], controllerResource(1));
    initializeController(&controllers[2], controllerResource(2));
}
