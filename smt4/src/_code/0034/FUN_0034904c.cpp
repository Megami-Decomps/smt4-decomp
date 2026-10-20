#include "common.h"

extern "C" {

extern u8 *FUN_002c09bc(void);

u8 FUN_0034904c(void)
{
    u8 *block = FUN_002c09bc();

    return (u32)(*(int *)(block + 0x1f458) - *(int *)(block + 0x1f85c)) >= 900;
}

} /* extern "C" */
