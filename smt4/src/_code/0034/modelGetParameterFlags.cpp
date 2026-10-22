#include "shard/Shard0034.h"

/* Read the flags for one resource parameter record. */
extern "C" u16 modelGetParameterFlags(const ModelParameterOwner *object, u32 index)
{
    return object->resource->records[index].flags;
}
