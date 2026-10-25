#include "common.h"
#include "shard/byteIsAtLeast100.h"

extern "C" {

u8 byteIsAtLeast100(u8 *value)
{
    return *value >= 100;
}

} /* extern "C" */
