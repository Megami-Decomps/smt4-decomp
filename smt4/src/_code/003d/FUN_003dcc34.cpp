#include "common.h"

extern "C" {

extern int textureCacheGetDirection(void);

u8 FUN_003dcc34(void)
{
    return textureCacheGetDirection() != 0;
}

} /* extern "C" */
