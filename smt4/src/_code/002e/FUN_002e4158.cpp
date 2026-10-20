#include "common.h"

extern "C" {

int scrSetResult(u32 result);
extern u32 *FUN_002a8764(void);

u32 FUN_002e4158(void)
{
    u32 *party = FUN_002a8764();

    scrSetResult(*party);
    return 1;
}

} /* extern "C" */
