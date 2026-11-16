#include "map/mapIf.h"
#include "event/bustupEvent/BustupTex.h"

namespace {
struct MapIfSpawnPose { f32 x, y, z, heading; };
}
extern "C" {
extern MapIfStateA *g_mapIf;
extern void *g_handleRegistry;
s32 textFormatBuffer(char *output, const char *format, ...);
void *asdMemoryAllocTraced(u32 size, const char *file, s32 line);
MapIfResource *modelListInit(void *memory);
void resourceOwnerLoadFileSync(MapIfResource *, const char *path);
void moriModelContentLoadBody(MapIfResource *, s32 mode);
void handleRegistryRegisterObject(void *registry, u32 handle);
void controllerSetDestination(u32 handle, const f32 *position);
void controllerSetRotationEulerDegrees(u32 handle, f32 x, f32 y, f32 z);
void controllerSetPosition(u32 handle, f32 x, f32 y, f32 z);
void controllerSetPosition(u32 handle, f32 x, f32 y, f32 z);
void modelPlayClip(u32 handle, s32 first, s32 second, f32 x, f32 y);

// Create the map's lmap fast model at the supplied position and heading.
void FUN_002d88e0(MapIfSpawnPose pose)
{
    MapIfStateA *mapIf = g_mapIf;
    MapIfSlotA *slot = &mapIf->slots[0];
    MapIfFastModelState *state = reinterpret_cast<MapIfFastModelState *>(slot);
    state->active = 1;
    state->first = 0;
    state->second = 0;
    state->position[0] = pose.x;
    state->position[1] = pose.y;
    state->position[2] = pose.z;
    state->heading = pose.heading;
    char path[128];
    textFormatBuffer(path, "map/all/lmap_fast.bam");
    MapIfResource *resource = static_cast<MapIfResource *>(
        asdMemoryAllocTraced(0x20, "c:\\SMT4F\\SMT4F\\sdds4\\program\\map\\mapIf.cpp", 0x1745));
    if (resource != NULL)
        resource = modelListInit(resource);
    slot->resource = resource;
    resourceOwnerLoadFileSync(resource, path);
    moriModelContentLoadBody(slot->resource, 0);
    u32 handle = slot->resource->handle;
    handleRegistryRegisterObject(g_handleRegistry, handle);
    controllerSetDestination(handle, state->position);
    controllerSetRotationEulerDegrees(handle, 0.0f, state->heading, 0.0f);
    controllerSetPosition(handle, 50.0f, 50.0f, 50.0f);
    modelPlayClip(handle, 0, 2, 0.0f, 0.0f);
    asdTMTexTablePrepareNodeImage(4, 0x25);
    mapIf->unkCD08 = 1;
    mapIf->unkCD0C = 0;
}
}
