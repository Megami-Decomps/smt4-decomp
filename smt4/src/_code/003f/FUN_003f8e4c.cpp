/* NON_MATCHING: retail uses vmov s0, r0 where the compiled block uses vldr s0, [r4, #12]. */
#include "shard/W5_W5Match5_TwinRecords.h"

using namespace SampleRange;



extern "C" Sample* FUN_003f887c(SampleTransform* transform);

extern "C" f32 FUN_003f8e4c(SampleTransform* transform)
{
    Sample* sample = FUN_003f887c(transform);
    return static_cast<f32>(static_cast<u32>(sample->value)) * transform->scale + transform->bias;
}
