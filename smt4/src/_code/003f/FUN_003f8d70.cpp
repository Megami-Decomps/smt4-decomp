/* NON_MATCHING: retail copies the sample time into s1 before checking the last key and
 * computing the initial key estimate; the build reuses s0. */
#include "shard/DiscreteAnimationTrack.h"

/* Samples the latest key at or before the requested time, without interpolation. */
extern "C" f32 FUN_003f8d70(const DiscreteAnimationTrack<f32> *track, f32 time)
{
    return discreteAnimationFindKey(track, time)->value;
}
