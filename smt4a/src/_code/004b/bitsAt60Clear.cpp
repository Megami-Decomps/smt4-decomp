#include "shard/Shard004B.h"
#include "util/BitsAndBytes_Shard004B.h"

extern "C" {

void bitsAt60Clear(BitsAt60 *obj, u16 mask)
{
    obj->bits = obj->bits & ~mask;
}

} /* extern "C" */
