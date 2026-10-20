#include "common.h"

extern "C" {

extern int gameDataBlocksGetSaveData(void);

int gameJumpRequestGet(void)
{
    int base = gameDataBlocksGetSaveData();

    return base + 0x24b84;
}

} /* extern "C" */
