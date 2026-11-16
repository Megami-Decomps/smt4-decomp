/* NON_MATCHING: body, branches and the allocate-then-construct result now match; retail loads &g_mapIf before the store constants and places g_gameState's pool word before g_mapIf's. */
#include "map/mapIf.h"
#include "code/Code0040.h"

namespace {
struct MapIfSpawnPose { f32 x, y, z, heading; };
}
extern "C" {
extern MapIfStateA *g_mapIf;
extern s32 g_gameState;
extern void *g_handleRegistry;
s32 textFormatBuffer(char *output, const char *format, ...);
void *asdMemoryAllocTraced(u32 size, const char *file, s32 line);
MapIfResource *modelListInit(void *memory);
void FUN_0040aad4(MapIfResource *, s32 mode);
void handleRegistryRegisterObject(void *registry, u32 handle);
void controllerSetDestination(u32 handle, const f32 *position);
void controllerSetRotationEulerDegrees(u32 handle, f32 x, f32 y, f32 z);
void modelPlayClip(u32 handle, s32 first, s32 second, f32 x, f32 y);

// Create the map's fast model at the supplied position and heading.
void FUN_00234118(MapIfSpawnPose pose)
{
    MapIfSlotA *slot = &g_mapIf->slots[0];
    MapIfFastModelState *state = reinterpret_cast<MapIfFastModelState *>(slot);
    state->active = 1;
    state->first = 0;
    state->second = 0;
    state->position[0] = pose.x;
    state->position[1] = pose.y;
    state->position[2] = pose.z;
    state->heading = pose.heading;
    char path[128];
    if (g_gameState == 0x18)
        textFormatBuffer(path, "map/all/m099_fast.bam");
    else
        textFormatBuffer(path, "map/all/m%03d_fast.bam", g_gameState);
    if (g_gameState == 0x2c || g_gameState == 0x2d || g_gameState == 0x2e || g_gameState == 0x2f)
        textFormatBuffer(path, "map/all/m%03d_fast.bam", 0x2b);
    void *memory = asdMemoryAllocTraced(0x20, "c:\\SMT4F\\SMT4F\\sdds4\\program\\map\\mapIf.cpp", 0x16ee);
    MapIfResource *resource = static_cast<MapIfResource *>(memory);
    if (memory != NULL)
        resource = modelListInit(memory);
    slot->resource = resource;
    resourceOwnerLoadFileSync(resource, path);
    FUN_0040aad4(slot->resource, 0);
    u32 handle = slot->resource->handle;
    handleRegistryRegisterObject(g_handleRegistry, handle);
    controllerSetDestination(handle, state->position);
    controllerSetRotationEulerDegrees(handle, 0.0f, state->heading, 0.0f);
    modelPlayClip(handle, 0, 2, 0.0f, 0.0f);
}
}
