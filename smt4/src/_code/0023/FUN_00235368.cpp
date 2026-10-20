#include "common.h"

extern "C" {

int FUN_002bd420(void *dst, u32 *src, int size);

extern u32 DAT_004def08;

void FUN_00235368(void *dst)
{
    FUN_002bd420(dst, &DAT_004def08, 0x10);
}

} /* extern "C" */
