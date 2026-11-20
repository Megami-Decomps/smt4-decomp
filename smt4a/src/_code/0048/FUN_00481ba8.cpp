/* NON_MATCHING: vector loads, VFP registers and the order of the speed load differ. */
#include "map/DistanceVisibilityWork.h"
#include "map/LmapGlobals.h"
#include "map/ChaseVelocity.h"

/* Points the velocity from the actor toward the scene position, scaled to the chase speed. */
extern "C" void FUN_00481ba8(DistanceVisibilityWork *work)
{
    mapSetChaseVelocity(work->offset, mapChaseDirection(g_lmapScene->pose.position, work->actor->block.position),
                        work->speed);
}
