#include "common.h"

extern "C" {

void sysMemClear(void *block, s32 size);
extern u8 DAT_005cb200[];

/* Clears the 0x1308-byte block at 0x5CB200. */
void FUN_002c1650(void)
{
    sysMemClear(DAT_005cb200, 0x1308);
}

} /* extern "C" */
