#include "common.h"

extern "C" {

extern u8 *gameGetPlayerData(void);

u8 *FUN_002bd1fc(void)
{
    u8 *pad = gameGetPlayerData();

    return pad + 0x4c;
}

} /* extern "C" */
