#include "shard/Shard004B.h"
#include "shard/bitsAt60Test.h"

extern "C" {

u8 bitsAt60Test(BitsAt60 *obj, u8 bit)
{
    return (obj->bits & (1 << bit)) != 0;
}

} /* extern "C" */
