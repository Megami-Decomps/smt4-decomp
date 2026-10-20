#include "shard/Shard0047.h"

extern "C" {

extern u8 *FUN_0014af84(void);

u8 gameBlockByte27E98Is1To3(void)
{
    return (u32)(FUN_0014af84()[0x27E98] - 1) <= 2;
}

} /* extern "C" */
