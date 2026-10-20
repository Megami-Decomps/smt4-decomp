#include "common.h"

extern "C" {

extern u8 *gameDataBlocksGetSaveData(void);

u8 gameJumpRequestIsPending(void)
{
    u8 *base = gameDataBlocksGetSaveData();

    return (u32)(base[0x24b84] - 1) <= 2;
}

} /* extern "C" */
