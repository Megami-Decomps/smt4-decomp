/* NON_MATCHING: initial global/controller flag-load order and hidden-controller branch predication differ. */
#include "map/mapIf.h"
#include "game/GameStateA.h"
#include "map/mapDepart.h"
#include "Model/MoriModelContent.h"
#include "gfx/ControllerModel.h"

extern "C" {
s32 gameFlagIsSet(u32 flag);

/* Apply a marker's visibility, destination, heading and selected animation. */
void mapIfControllerApply(MapIfModelMarkerA *marker)
{
    if (marker->active != 0) {
        Obj557b18 *controller = marker->resource->body;
        if (g_gameState.loading != 0) {
            if ((controller->flags & 1) == 0)
                controller->flags |= 3;
        } else if (marker->flags != 0) {
            if (marker->state != 0) {
                if ((controller->flags & 1) != 0)
                    controller->flags &= ~3;
            } else if ((controller->flags & 1) == 0) {
                controller->flags |= 3;
            }
            if (gameFlagIsSet(12) != 0 && gameFlagIsSet(16) == 0)
                controller->flags |= 3;
            /* The marker position's x, y, z. */
            controllerSetDestination(controller, reinterpret_cast<const MapVector *>(marker->position));
            controllerSetRotationEulerDegrees(controller, 0.0f, marker->heading, 0.0f);
            if (slots4FGetActiveValue(controller) != marker->elapsed)
                modelPlayClip(controller, marker->elapsed, 2, 0.0f, 0.0f);
        }
    }
}
}
