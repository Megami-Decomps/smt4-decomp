#include "shard/DiscreteAnimationTrack.h"

/* Samples the value of the last halfword key at or before the supplied time, without interpolation. */
extern "C" s32 discreteFrameTrackSampleHalfword(const HalfwordAnimationTrack *track, f32 time)
{
    return discreteFrameTrackFindKey(track, time)->value;
}
