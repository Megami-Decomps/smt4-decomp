#include "shard/Shard0051.h"

extern "C" {

void variantSetByteB(Variant *obj, u32 *source, u8 arg)
{
    obj->type = 4;
    obj->byteArg = arg;
    obj->value = *source;
}

} /* extern "C" */
