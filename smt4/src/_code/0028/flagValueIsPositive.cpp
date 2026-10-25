#include "common.h"
#include "shard/flagValueIsPositive.h"

extern "C" {

extern int FUN_0028fb40(void);

u8 flagValueIsPositive(void)
{
    return 0 < FUN_0028fb40();
}

} /* extern "C" */
