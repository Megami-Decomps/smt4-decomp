#include "shard/Shard004B.h"
#include "util/BitsAndBytes_VariantE_Shard004B.h"

extern "C" {

void bitsAt60Set(BitsAt60 *obj, u8 bit)
{
    obj->bits = obj->bits | (u16)(1 << bit);
}

} /* extern "C" */
