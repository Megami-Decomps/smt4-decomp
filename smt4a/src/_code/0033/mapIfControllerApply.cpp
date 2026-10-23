/* NON_MATCHING: initial global/controller flag-load order and hidden-controller branch predication differ. */
#include "map/mapIf.h"
#include "map/mapDepart.h"
#include "shard/W5_W5Match7_ControllerPose.h"

namespace {
/* The model node's controller pointer is beyond the shared NodeEnableNode view. */
struct MapMarkerModelView {
    u32 flags;
    ControllerPose *controller;
};
}
extern "C" {
extern GameStateA g_gameState;
s32 gameFlagIsSet(u32 flag);
void controllerSetDestination(ControllerPose *controller, const f32 *position);
void controllerSetRotationEulerDegrees(ControllerPose *controller, f32 x, f32 y, f32 z);
s32 slots4FGetActiveValue(ControllerPose *controller);
void FUN_003fe86c(ControllerPose *controller, u32 value, s32 mode, f32 first, f32 second);

/* Apply a marker's visibility, destination, heading and selected animation. */
void mapIfControllerApply(MapIfModelMarker *marker)
{
    if (marker->active != 0) {
        ControllerPose *controller = reinterpret_cast<MapMarkerModelView *>(marker->model)->controller;
        if (g_gameState.controllerFlags.secondary != 0) {
            if ((controller->flags.value & 1) == 0)
                controller->flags.value |= 3;
        } else if (marker->flags != 0) {
            if (marker->state != 0) {
                if ((controller->flags.value & 1) != 0)
                    controller->flags.value &= ~3;
            } else if ((controller->flags.value & 1) == 0) {
                controller->flags.value |= 3;
            }
            if (gameFlagIsSet(12) != 0 && gameFlagIsSet(16) == 0)
                controller->flags.value |= 3;
            controllerSetDestination(controller, marker->position);
            controllerSetRotationEulerDegrees(controller, 0.0f, marker->heading, 0.0f);
            if (slots4FGetActiveValue(controller) != marker->elapsed)
                FUN_003fe86c(controller, marker->elapsed, 2, 0.0f, 0.0f);
        }
    }
}
}
