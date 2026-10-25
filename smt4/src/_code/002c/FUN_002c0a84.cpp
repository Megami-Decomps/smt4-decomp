#include "common.h"
#include "shard/FUN_002c0a84.h"

extern "C" {

extern u8 *gameDataBlocksGetSaveData(void);

u8 FUN_002c0a84(void)
{
    u8 *base = gameDataBlocksGetSaveData();

    return base[0x1ec51];
}

} /* extern "C" */
