#include "common.h"

extern "C" {

extern u8 *FUN_002c09bc(void);

u8 FUN_002c0a84(void)
{
    u8 *base = FUN_002c09bc();

    return base[0x1ec51];
}

} /* extern "C" */
