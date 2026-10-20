#include "common.h"

extern "C" {

int memClear(void *ptr, int size);

extern u8 DAT_0047d200;

void FUN_00200b10(void)
{
    memClear(&DAT_0047d200, 0x1308);
}

} /* extern "C" */
