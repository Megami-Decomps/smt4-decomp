#include "shard/W5_W5Match5_TwinRecords.h"

using namespace ResourceIdentity;

extern "C" {


u16 resourceGetId(const ObjectResource *object)
{
    return object->resource->value;
}

} /* extern "C" */
