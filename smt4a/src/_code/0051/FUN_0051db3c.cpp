/* NON_MATCHING: retail copies the sample time into s1 before checking the last key and
 * computing the initial key estimate; the build reuses s0. */
#include "shard/DiscreteAnimationTrack.h"

/* Samples the latest key at or before the requested time, without interpolation. */
extern "C" s32 FUN_0051db3c(const DiscreteAnimationTrack<s32> *track, f32 time)
{
    return discreteAnimationFindKey(track, time)->value;
}
