#include "shard/Shard004F.h"

extern "C" {

extern u32 textureCacheGetDirection(void);

u8 FUN_004fa7bc(void)
{
    return textureCacheGetDirection() != 0;
}

} /* extern "C" */
