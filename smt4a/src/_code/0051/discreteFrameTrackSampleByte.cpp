#include "shard/DiscreteAnimationTrack.h"

/* Samples the value of the last byte key at or before the supplied time, without interpolation. */
extern "C" s32 discreteFrameTrackSampleByte(const ByteAnimationTrack *track, f32 time)
{
    return discreteFrameTrackFindKey(track, time)->value;
}
