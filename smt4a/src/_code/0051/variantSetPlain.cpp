#include "shard/Shard0051.h"

extern "C" {

void variantSetPlain(Variant *obj, u32 *source)
{
    obj->type = 1;
    obj->value = *source;
}

} /* extern "C" */
