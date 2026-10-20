#include "shard/Shard0047.h"

extern "C" {

extern u8 *gameDataBlocksGetSaveData(void);

u8 gameBlockByte27E98Is1To3(void)
{
    return (u32)(gameDataBlocksGetSaveData()[0x27E98] - 1) <= 2;
}

} /* extern "C" */
