#include "shard/Shard004F.h"

extern "C" {

extern u32 textureCacheGetDirection(void);

u8 FUN_004fa0c4(void)
{
    return textureCacheGetDirection() != 0;
}

} /* extern "C" */
