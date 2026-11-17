#include "map/MapIfGlobals.h"
#include "Model/MoriModelContent.h"
#include "Model/MoriModelManager.h"
#include "gfx/ControllerModel.h"

extern "C" {

void *asdMemoryAllocTraced(u32 size, const char *file, u32 line);

/* Shows the action marker model (map/all/action_up.bam) at the given placement. */
void mapIfShowActionMarker(MapMarkerPosition placement)
{
    MapIfModelSlotA *marker = &g_mapIf.state->slots[4];
    void *object;
    Obj557b18 *controller;

    marker->active = 1;
    marker->state = 0;
    marker->timer = 0;
    marker->position = placement;
    object = asdMemoryAllocTraced(32, "c:\\SMT4F\\SMT4F\\sdds4\\program\\map\\mapIf.cpp", 6329);
    if (object != NULL) {
        object = modelListInit(object);
    }
    marker->resource = static_cast<MoriModelContent *>(object);
    resourceOwnerLoadFileSync(marker->resource, "map/all/action_up.bam");
    moriModelContentLoadBody(marker->resource, 0);
    controller = marker->resource->body;
    handleRegistryRegisterObject(g_handleRegistry, controller);
    /* The marker position's x, y, z. */
    controllerSetDestination(controller, reinterpret_cast<const MapVector *>(&marker->position));
    controllerSetRotationEulerDegrees(controller, 0.0f, marker->position.w, 0.0f);
    modelPlayClip(controller, 0, 2, 0.0f, 0.0f);
}

} /* extern "C" */
