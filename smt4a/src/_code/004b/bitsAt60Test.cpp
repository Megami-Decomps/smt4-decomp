#include "shard/Shard004B.h"
#include "util/BitsAndBytes_VariantF_Shard004B.h"

extern "C" {

u8 bitsAt60Test(BitsAt60 *obj, u8 bit)
{
    return (obj->bits & (1 << bit)) != 0;
}

} /* extern "C" */
