#include "shard/W5_W5Match5_TwinRecords.h"

using namespace PackedSampleDecoding;



extern "C" const PackedSample* FUN_0051d730(SampleTransform* transform);

extern "C" f32 resourceGetPackedSampleFloat(SampleTransform* transform)
{
    const PackedSample* data = FUN_0051d730(transform);
    u32 sample = static_cast<u32>(data->low)
               + ((static_cast<u32>(data->high) & 0x0F) << 8);
    return transform->bias + static_cast<f32>(sample) * transform->scale;
}
