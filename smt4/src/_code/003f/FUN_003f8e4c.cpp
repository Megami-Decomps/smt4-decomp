/* NON_MATCHING: retail loads scale, converts the sample value in s0/s1, then loads the bias; the built code loads the bias before the conversion. */
#include "shard/W5_W5Match5_TwinRecords.h"

using namespace SampleRange;



extern "C" Sample* FUN_003f887c(SampleTransform* transform);

extern "C" f32 FUN_003f8e4c(SampleTransform* transform)
{
    Sample* sample = FUN_003f887c(transform);
    return static_cast<f32>(static_cast<u32>(sample->value)) * transform->scale + transform->bias;
}
