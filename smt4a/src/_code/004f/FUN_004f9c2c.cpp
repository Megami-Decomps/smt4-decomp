#include "shard/Shard004F.h"

extern "C" {

extern u32 textureCacheGetDirection(void);

u8 FUN_004f9c2c(void)
{
    return textureCacheGetDirection() != 0;
}

} /* extern "C" */
