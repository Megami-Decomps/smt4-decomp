#include "common.h"

extern "C" {

extern u16 *gameGetPlayerData(void);

void FUN_00333edc(void)
{
    u16 *pad = gameGetPlayerData();

    pad[0x15] = pad[0xe];
    pad[0x16] = pad[0xf];
}

} /* extern "C" */
