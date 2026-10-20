#include "common.h"

extern "C" {

extern u32 *FUN_002a8764(void);

u32 FUN_0022ea28(void)
{
    u32 *value = FUN_002a8764();

    return *value;
}

} /* extern "C" */
