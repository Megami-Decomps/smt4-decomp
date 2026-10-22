#include "shard/Shard0034.h"

/* Read the indexed model parameter's floating-point value. */
extern "C" f32 modelParameterGetFloat(const ModelParameterFloatOwner *owner, u32 index)
{
    const ModelParameterFloatRecord *record = owner->resource->records + index;
    return record->value;
}
