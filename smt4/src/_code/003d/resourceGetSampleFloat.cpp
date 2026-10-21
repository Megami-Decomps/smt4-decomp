#include "shard/W5_W5Match5_TwinRecords.h"

using namespace ResourceSampleLookup;



extern "C" {
extern u8 DAT_003ff7c0[];

f32 resourceGetSampleFloat(LookupOwner* owner)
{
    LookupEntry* entry = owner->entry;
    if (entry == 0) {
        return 0.0f;
    }

    return static_cast<f32>(static_cast<u32>(DAT_003ff7c0[entry->index]));
}
}
