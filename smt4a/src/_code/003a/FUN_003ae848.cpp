#include "shard/Shard003A.h"

extern "C" {

extern u8 FUN_0018206c(s32 a, s32 b);

u8 FUN_003ae848(void)
{
    return FUN_0018206c(0x24, 0) != 0;
}

} /* extern "C" */
