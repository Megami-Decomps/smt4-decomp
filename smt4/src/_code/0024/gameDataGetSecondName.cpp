#include "common.h"

extern "C" {

extern int gameDataBlocksGetSaveData(void);

int gameDataGetSecondName(void)
{
    int base = gameDataBlocksGetSaveData();

    return base + 0x1f872;
}

} /* extern "C" */
