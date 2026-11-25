/* NON_MATCHING: loading-flag and controller load scheduling differ; armcc predicates the flag update in the loading path. */
#include "map/mapIf.h"
#include "game/GameStateA.h"
#include "map/mapDepart.h"
#include "Model/MoriModelContent.h"
#include "gfx/ControllerModel.h"

extern "C" {
s32 gameFlagIsSet(u32 flag);

/* Applies a marker's visibility, destination, heading and selected animation. */
void mapIfControllerApply(MapIfModelMarkerA *marker)
{
    if (!marker->active) {
        return;
    }
    Obj557b18 *controller = marker->resource->body;
    if (g_gameState.loading) {
        if ((controller->flags & 1) == 0) {
            controller->flags |= 3;
        }
        return;
    }
    if (!marker->flags) {
        return;
    }

    if (marker->state) {
        if (controller->flags & 1) {
            controller->flags &= ~3u;
        }
    } else if (!(controller->flags & 1)) {
        controller->flags |= 3;
    }
    if (gameFlagIsSet(12) != 0 && gameFlagIsSet(16) == 0) {
        controller->flags |= 3;
    }
    controllerSetDestination(controller, (const MapVector *)marker->position);
    controllerSetRotationEulerDegrees(controller, 0.0f, marker->heading, 0.0f);
    if (slots4FGetActiveValue(controller) != marker->elapsed) {
        modelPlayClip(controller, marker->elapsed, 2, 0.0f, 0.0f);
    }
}
} /* extern "C" */
