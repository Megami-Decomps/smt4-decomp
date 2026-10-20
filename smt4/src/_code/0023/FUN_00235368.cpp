#include "common.h"

extern "C" {

int memCopy(void *dst, u32 *src, int size);

extern u32 DAT_004def08;

void FUN_00235368(void *dst)
{
    memCopy(dst, &DAT_004def08, 0x10);
}

} /* extern "C" */
