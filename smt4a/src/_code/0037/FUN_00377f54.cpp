#include "map/MapGimicGlobal.h"
#include "Model/MoriModelContent.h"
#include "gfx/ControllerModel.h"
#include "map/mapDepart.h"
extern "C" {

// Moves every active gimmick with this ID and sets its yaw in degrees.
void FUN_00377f54(s32 id, MapVector destination, f32 yaw)
{
    for (s32 index = 0; index < MAP_GIMIC_SLOTS; ++index) {
        MapGimicA* gimic = g_mapGimic;
        MapGimicSlotA* slot = &gimic->slots[index];
        if (slot->active != 0 && slot->id == id) {
            Obj557b18 *controller = slot->obj->body;
            controllerSetDestination(controller, &destination);
            controllerSetRotationEulerDegrees(controller, 0.0f, yaw, 0.0f);
        }
    }
}
}
