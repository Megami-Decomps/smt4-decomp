#include "shard/Shard0044.h"

extern "C" {

u32 *setMinus1ReturnPtr(u32 *value)
{
    *value = 0xFFFFFFFF;
    return value;
}

} /* extern "C" */
