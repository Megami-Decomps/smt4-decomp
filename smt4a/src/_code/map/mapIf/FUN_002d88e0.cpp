#include <stdio.h>
#include "map/MapIfGlobals.h"
#include "event/bustupEvent/BustupTex.h"
#include "Model/MoriModelContent.h"
#include "Model/MoriModelManager.h"
#include "gfx/ControllerModel.h"

namespace {
struct MapIfSpawnPose { f32 x, y, z, heading; };
}
extern "C" {
void *asdMemoryAllocTraced(u32 size, const char *file, s32 line);

// Create the map's lmap fast model at the supplied position and heading.
void FUN_002d88e0(MapIfSpawnPose pose)
{
    MapIfStateA *mapIf = g_mapIf.state;
    MapIfModelSlotA *slot = &mapIf->slots[0];
    slot->active = 1;
    slot->state = 0;
    slot->timer = 0;
    slot->position.x = pose.x;
    slot->position.y = pose.y;
    slot->position.z = pose.z;
    slot->position.w = pose.heading;
    char path[128];
    sprintf(path, "map/all/lmap_fast.bam");
    MoriModelContent *resource = static_cast<MoriModelContent *>(
        asdMemoryAllocTraced(0x20, "c:\\SMT4F\\SMT4F\\sdds4\\program\\map\\mapIf.cpp", 0x1745));
    if (resource != NULL)
        resource = modelListInit(resource);
    slot->resource = resource;
    resourceOwnerLoadFileSync(resource, path);
    moriModelContentLoadBody(slot->resource, 0);
    Obj557b18 *handle = slot->resource->body;
    handleRegistryRegisterObject(g_handleRegistry, handle);
    /* The slot position's x, y, z. */
    controllerSetDestination(handle, reinterpret_cast<const MapVector *>(&slot->position));
    controllerSetRotationEulerDegrees(handle, 0.0f, slot->position.w, 0.0f);
    controllerSetPosition(handle, 50.0f, 50.0f, 50.0f);
    modelPlayClip(handle, 0, 2, 0.0f, 0.0f);
    asdTMTexTablePrepareNodeImage(4, 0x25);
    mapIf->unkCD08 = 1;
    mapIf->unkCD0C = 0;
}
}
