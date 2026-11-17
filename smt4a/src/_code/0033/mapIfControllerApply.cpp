/* NON_MATCHING: initial global/controller flag-load order and hidden-controller branch predication differ. */
#include "map/mapIf.h"
#include "game/GameStateA.h"
#include "map/mapDepart.h"
#include "shard/W5_W5Match7_ControllerPose.h"

extern "C" {
s32 gameFlagIsSet(u32 flag);
void controllerSetDestination(ControllerPose *controller, const f32 *position);
void controllerSetRotationEulerDegrees(ControllerPose *controller, f32 x, f32 y, f32 z);
s32 slots4FGetActiveValue(ControllerPose *controller);
void modelPlayClip(ControllerPose *controller, u32 value, s32 mode, f32 first, f32 second);

/* Apply a marker's visibility, destination, heading and selected animation. */
void mapIfControllerApply(MapIfModelMarkerA *marker)
{
    if (marker->active != 0) {
        ControllerPose *controller = reinterpret_cast<ControllerPose *>(marker->resource->handle);
        if (g_gameState.loading != 0) {
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
                modelPlayClip(controller, marker->elapsed, 2, 0.0f, 0.0f);
        }
    }
}
}
