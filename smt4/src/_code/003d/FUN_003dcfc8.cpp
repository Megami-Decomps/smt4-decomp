#include "common.h"

extern "C" {

extern int textureCacheGetDirection(void);

u8 FUN_003dcfc8(void)
{
    return textureCacheGetDirection() != 0;
}

} /* extern "C" */
