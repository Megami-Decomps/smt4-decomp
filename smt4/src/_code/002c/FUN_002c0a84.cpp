#include "common.h"
#include "shard/W4_W4Match5_DataTable.h"

extern "C" {

extern u8 *gameDataBlocksGetSaveData(void);

u8 FUN_002c0a84(void)
{
    u8 *base = gameDataBlocksGetSaveData();

    return base[0x1ec51];
}

} /* extern "C" */
