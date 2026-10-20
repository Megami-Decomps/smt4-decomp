#include "shard/Shard0031.h"

extern "C" {

s32 rangeObjRemaining(RangeObject *obj)
{
    return obj->end - obj->pos;
}

} /* extern "C" */
