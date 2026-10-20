#include "shard/Shard0051.h"

extern "C" {

void variantSetWordB(Variant *obj, u32 *source, u32 arg)
{
    obj->type = 3;
    obj->wordArg = arg;
    obj->value = *source;
}

} /* extern "C" */
