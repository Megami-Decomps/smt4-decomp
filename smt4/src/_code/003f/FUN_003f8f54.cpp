#include "shard/W5_W5Match5_TwinRecords.h"

using namespace SampleRange;

extern "C" const u32* animCurveFindPackedKey(const SampleTransform* transform);

/* The sample's value (its top 20 bits) as a float. */
static __inline f32 packedSampleGetValue(const u32* sample)
{
    return *sample >> 12;
}

/* The transform's current sample, scaled and offset into its output range. */
extern "C" f32 FUN_003f8f54(const SampleTransform* transform)
{
    return packedSampleGetValue(animCurveFindPackedKey(transform)) * transform->scale + transform->bias;
}
