/* NON_MATCHING: scalar/global base register allocation and heading-store scheduling differ. */
/* Starts map movement toward a position and turns both scene actors toward it. */
#include "map/mapDepart.h"
#include "game/GameStateA.h"
#include "map/LmapGlobals.h"

extern "C" {
void FUN_003250ac(void *movement, MapVector current, MapVector destination);
f32 mathPositionHeadingDegrees(MapVector current, MapVector destination);
void controllerSetRotationEulerDegrees(u32 controller, f32 x, f32 y, f32 z);

void FUN_0032714c(MapVector destination)
{
    LmapSceneA *scene = g_lmapScene;
    scene->movementDestination = destination;
    FUN_003250ac(&scene->movement, scene->movementCurrent, destination);
    scene = g_lmapScene;
    f32 heading = mathPositionHeadingDegrees(scene->movementCurrent, scene->movementDestination);
    scene = g_lmapScene;
    scene->movementHeading = heading;
    scene->movementState = 4;
    scene->resumeState = g_gameState.resumeMovementState;
    controllerSetRotationEulerDegrees(scene->models[4]->controller, 0.0f, heading, 0.0f);
    scene = g_lmapScene;
    controllerSetRotationEulerDegrees(scene->models[7]->controller, 0.0f, scene->movementHeading, 0.0f);
}
}
