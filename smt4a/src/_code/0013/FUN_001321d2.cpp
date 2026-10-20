#include "common.h"

extern "C" {

typedef struct Container {
    /* 0x00 */ u8 unk00[0x14];
    /* 0x14 */ s32 count;
} Container;

/* Returns 1 when the container holds no elements. */
u32 FUN_001321d2(Container *container)
{
    if (container->count != 0) {
        return 0;
    }
    return 1;
}

} /* extern "C" */
