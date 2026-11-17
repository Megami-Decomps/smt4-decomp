/* NON_MATCHING: body, branches and the allocate-then-construct result now match; retail loads &g_mapIf before the store constants and places g_gameState.mapId's pool word before g_mapIf's. */
#include "map/MapIfGlobals.h"
#include "game/GameStateA.h"
#include "code/Code0040.h"

namespace {
struct MapIfSpawnPose { f32 x, y, z, heading; };
}
extern "C" {
extern void *g_handleRegistry;
s32 textFormatBuffer(char *output, const char *format, ...);
void *asdMemoryAllocTraced(u32 size, const char *file, s32 line);
MapIfResource *modelListInit(void *memory);
void moriModelContentLoadBody(MapIfResource *, s32 mode);
void handleRegistryRegisterObject(void *registry, u32 handle);
void controllerSetDestination(u32 handle, const f32 *position);
void controllerSetRotationEulerDegrees(u32 handle, f32 x, f32 y, f32 z);
void modelPlayClip(u32 handle, s32 first, s32 second, f32 x, f32 y);

// Create the map's fast model at the supplied position and heading.
void FUN_00234118(MapIfSpawnPose pose)
{
    MapIfModelSlotA *slot = &g_mapIf.state->slots[0];
    slot->active = 1;
    slot->state = 0;
    slot->timer = 0;
    slot->position.x = pose.x;
    slot->position.y = pose.y;
    slot->position.z = pose.z;
    slot->position.w = pose.heading;
    char path[128];
    if (g_gameState.mapId == 0x18)
        textFormatBuffer(path, "map/all/m099_fast.bam");
    else
        textFormatBuffer(path, "map/all/m%03d_fast.bam", g_gameState.mapId);
    if (g_gameState.mapId == 0x2c || g_gameState.mapId == 0x2d || g_gameState.mapId == 0x2e || g_gameState.mapId == 0x2f)
        textFormatBuffer(path, "map/all/m%03d_fast.bam", 0x2b);
    void *memory = asdMemoryAllocTraced(0x20, "c:\\SMT4F\\SMT4F\\sdds4\\program\\map\\mapIf.cpp", 0x16ee);
    MapIfResource *resource = static_cast<MapIfResource *>(memory);
    if (memory != NULL)
        resource = modelListInit(memory);
    slot->resource = resource;
    resourceOwnerLoadFileSync(resource, path);
    moriModelContentLoadBody(slot->resource, 0);
    u32 handle = slot->resource->handle;
    handleRegistryRegisterObject(g_handleRegistry, handle);
    controllerSetDestination(handle, &slot->position.x);
    controllerSetRotationEulerDegrees(handle, 0.0f, slot->position.w, 0.0f);
    modelPlayClip(handle, 0, 2, 0.0f, 0.0f);
}
}
