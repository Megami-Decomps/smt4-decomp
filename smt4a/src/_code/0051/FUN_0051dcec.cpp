#include "shard/W5_W5Match5_TwinRecords.h"

using namespace SampleRange;

extern "C" Sample* FUN_0051d7e0(SampleTransform* transform);

/* The sample's raw value as a float. */
static __inline f32 sampleGetValue(const Sample* sample)
{
    return sample->value;
}

/* The transform's current sample, scaled and offset into its output range. */
extern "C" f32 FUN_0051dcec(SampleTransform* transform)
{
    return sampleGetValue(FUN_0051d7e0(transform)) * transform->scale + transform->bias;
}
