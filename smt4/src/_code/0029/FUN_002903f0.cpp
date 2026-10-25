#include "common.h"
#include "shard/W6_W6Match1_BgmRequestChannel.h"

extern "C" {

extern u16 *gameGetFlagBlock(void);

u16 FUN_002903f0(void)
{
    u16 *base = gameGetFlagBlock();

    return base[0x420];
}

} /* extern "C" */
