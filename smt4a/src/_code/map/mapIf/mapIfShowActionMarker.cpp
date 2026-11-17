#include "map/MapIfGlobals.h"

extern "C" {

extern void *g_handleRegistry;

void *asdMemoryAllocTraced(u32 size, const char *file, u32 line);
void *modelListInit(void *memory);
void resourceOwnerLoadFileSync(MapIfResource *model, const char *path);
void moriModelContentLoadBody(MapIfResource *model, s32 arg);
void handleRegistryRegisterObject(void *registry, u32 handle);
void controllerSetDestination(u32 controller, const MapMarkerPosition *destination);
void controllerSetRotationEulerDegrees(u32 controller, f32 x, f32 y, f32 z);
void modelPlayClip(u32 controller, s32 arg, s32 mode, f32 a, f32 b);

/* Shows the action marker model (map/all/action_up.bam) at the given placement. */
void mapIfShowActionMarker(MapMarkerPosition placement)
{
    MapIfModelSlotA *marker = &g_mapIf.state->slots[4];
    void *object;
    u32 controller;

    marker->active = 1;
    marker->state = 0;
    marker->timer = 0;
    marker->position = placement;
    object = asdMemoryAllocTraced(32, "c:\\SMT4F\\SMT4F\\sdds4\\program\\map\\mapIf.cpp", 6329);
    if (object != NULL) {
        object = modelListInit(object);
    }
    marker->resource = (MapIfResource *)object;
    resourceOwnerLoadFileSync(marker->resource, "map/all/action_up.bam");
    moriModelContentLoadBody(marker->resource, 0);
    controller = marker->resource->handle;
    handleRegistryRegisterObject(g_handleRegistry, controller);
    controllerSetDestination(controller, &marker->position);
    controllerSetRotationEulerDegrees(controller, 0.0f, marker->position.w, 0.0f);
    modelPlayClip(controller, 0, 2, 0.0f, 0.0f);
}

} /* extern "C" */
