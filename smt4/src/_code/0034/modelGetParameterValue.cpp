#include "shard/Shard0034.h"

/* Read the scalar for one resource parameter record. */
extern "C" f32 modelGetParameterValue(const ModelParameterOwner *object, u32 index)
{
    return object->resource->records[index].value;
}
