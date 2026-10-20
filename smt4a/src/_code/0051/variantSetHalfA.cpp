#include "shard/Shard0051.h"

extern "C" {

void variantSetHalfA(Variant *obj, u32 *source, u16 arg)
{
    obj->type = 2;
    obj->halfArg = arg;
    obj->value = *source;
}

} /* extern "C" */
