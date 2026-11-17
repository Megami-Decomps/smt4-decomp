#include "AsdSDK/AsdDebug.h"
#include "map/MapIfGlobals.h"
#include "Model/MoriModelContent.h"
#include "Model/MoriModelManager.h"
#include "gfx/ControllerModel.h"

extern "C" {

void *asdMemoryAllocTraced(u32 size, const char *file, int line);   /* allocate with source location */

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
    block->resource = static_cast<MoriModelContent *>(mem);
    resourceOwnerLoadFileSync(block->resource, "map/all/action_manhole.bam");
    moriModelContentLoadBody(block->resource, 0);
    Obj557b18 *object = block->resource->body;
    handleRegistryRegisterObject(g_handleRegistry, object);
    /* The marker position's x, y, z. */
    controllerSetDestination(object, reinterpret_cast<const MapVector *>(&block->position));
    controllerSetRotationEulerDegrees(object, 0.0f, block->position.w, 0.0f);
    modelPlayClip(object, 0, 2, 0.0f, 0.0f);
}

}
