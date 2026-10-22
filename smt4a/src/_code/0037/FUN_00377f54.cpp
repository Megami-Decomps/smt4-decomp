/* NON_MATCHING: The matched gimmick controller address uses different base registers. */
#include "map/mapGimic.h"
#include "map/mapDepart.h"
extern "C" {
extern MapGimic* g_mapGimic;
void controllerSetDestination(void*, const MapVector*);
void controllerSetRotationEulerDegrees(void*, f32, f32, f32);

// Moves every active gimmick with this ID and sets its yaw in degrees.
void FUN_00377f54(s32 id, MapVector destination, f32 yaw)
{
    for (s32 index = 0; index < MAP_GIMIC_SLOTS; ++index) {
        MapGimicSlot* slot = &g_mapGimic->slots[index];
        if (slot->active != 0 && slot->id == id) {
            void* controller = slot->obj->controller;
            controllerSetDestination(controller, &destination);
            controllerSetRotationEulerDegrees(controller, 0.0f, yaw, 0.0f);
        }
    }
}
}
