/* NON_MATCHING: vector loads, VFP registers and the order of the speed load differ. */
#include "map/AmbientMovement.h"
#include "map/LmapGlobals.h"
#include "map/ChaseVelocity.h"

/* Points the velocity from the actor toward the scene position, scaled to the chase speed. */
extern "C" void FUN_0039560c(AmbientMovementWork *work)
{
    mapSetChaseVelocity(work->velocity, mapChaseDirection(g_lmapScene->pose.position, work->actor->movement.position),
                        work->speed);
}
