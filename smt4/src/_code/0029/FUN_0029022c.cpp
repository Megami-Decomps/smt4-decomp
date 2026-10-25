#include "common.h"
#include "shard/FUN_0029022c.h"

extern "C" {

extern s16 *gameGetFlagBlock(void);

u8 FUN_0029022c(void)
{
    s16 *base = gameGetFlagBlock();

    return base[0x420] != 0;
}

} /* extern "C" */
