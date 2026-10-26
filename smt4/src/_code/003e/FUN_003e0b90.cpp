#include "common.h"

extern "C" {
s32 rt_memcmp(const void *first, const void *second, u32 bytes);

u32 FUN_003e0b90(const void *first, const void *second)
{
    if (second == NULL) {
        return 0;
    }
    return rt_memcmp(second, first, 8) == 0;
}
}
