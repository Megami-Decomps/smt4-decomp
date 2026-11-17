#include "AsdSDK/AsdDebug.h"
#include "map/MapIfGlobals.h"

extern "C" {

extern u32 g_handleRegistry;

void *asdMemoryAllocTraced(u32 size, const char *file, int line);   /* allocate with source location */
MapIfResource *modelListInit(void *mem);                 /* content constructor */
void resourceOwnerLoadFileSync(MapIfResource *content, const char *name);
void moriModelContentLoadBody(MapIfResource *content, u32 arg);
void handleRegistryRegisterObject(u32 registry, u32 object);
void controllerSetDestination(u32 object, const f32 *position);
void controllerSetRotationEulerDegrees(u32 object, f32 x, f32 y, f32 z);
void modelPlayClip(u32 object, s32 first, s32 second, f32 x, f32 y);

// Spawns the manhole action model at the given position and starts it moving there.
void mapIfSpawnManholeAction(f32 x, f32 y, f32 z, f32 w)
{
    MapIfModelSlotA *block = &g_mapIf.state->slots[1];
    block->active = 1;
    block->state = 0;
    block->timer = 0;
    block->position.x = x;
    block->position.y = y;
    block->position.z = z;
    block->position.w = w;
    void *mem = asdMemoryAllocTraced(0x20, "c:\\SMT4F\\SMT4F\\sdds4\\program\\map\\mapIf.cpp", 0x17dd);
    if (mem != NULL) {
        mem = modelListInit(mem);
    }
    block->resource = (MapIfResource *)mem;
    resourceOwnerLoadFileSync(block->resource, "map/all/action_manhole.bam");
    moriModelContentLoadBody(block->resource, 0);
    u32 object = block->resource->handle;
    handleRegistryRegisterObject(g_handleRegistry, object);
    controllerSetDestination(object, &block->position.x);
    controllerSetRotationEulerDegrees(object, 0.0f, block->position.w, 0.0f);
    modelPlayClip(object, 0, 2, 0.0f, 0.0f);
}

}
