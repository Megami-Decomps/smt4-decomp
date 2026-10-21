#include "shard/W5_W5Match5_TwinRecords.h"

using namespace PackedSampleDecoding;



extern "C" const PackedSample* FUN_003f87cc(SampleTransform* transform);

extern "C" f32 resourceGetPackedSampleFloat(SampleTransform* transform)
{
    const PackedSample* data = FUN_003f87cc(transform);
    u32 sample = static_cast<u32>(data->low)
               + ((static_cast<u32>(data->high) & 0x0F) << 8);
    return transform->bias + static_cast<f32>(sample) * transform->scale;
}
