#include "common.h"

extern "C" {

u16 FUN_0018c0d8(void);
int scrSetResult(u32 result);

u32 FUN_001dc8a8(void)
{
    scrSetResult(FUN_0018c0d8());
    return 1;
}

} /* extern "C" */
