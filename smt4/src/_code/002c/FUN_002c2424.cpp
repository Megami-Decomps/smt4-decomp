#include "common.h"
#include "shard/FUN_002c2424.h"

extern "C" {
u32 FUN_00147918(u32 first, u32 second);

/* Forwards the GPU service request. */
u32 FUN_002c2424(u32 first, u32 second)
{
    return FUN_00147918(first, second);
}
}
