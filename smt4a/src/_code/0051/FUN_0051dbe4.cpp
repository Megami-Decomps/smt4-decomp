#include "shard/W5_W5Match5_TwinRecords.h"

using namespace SampleRange;

extern "C" const u32* FUN_0051d658(const SampleTransform* transform);

/* The sample's value (its top 20 bits) as a float. */
static __inline f32 packedSampleGetValue(const u32* sample)
{
    return *sample >> 12;
}

/* The transform's current sample, scaled and offset into its output range. */
extern "C" f32 FUN_0051dbe4(const SampleTransform* transform)
{
    return packedSampleGetValue(FUN_0051d658(transform)) * transform->scale + transform->bias;
}
