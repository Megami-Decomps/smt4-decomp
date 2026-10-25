#include "shard/Shard004B.h"
#include "shard/bitsAt60Clear.h"

extern "C" {

void bitsAt60Clear(BitsAt60 *obj, u16 mask)
{
    obj->bits = obj->bits & ~mask;
}

} /* extern "C" */
