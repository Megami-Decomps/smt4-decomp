#include "common.h"

extern "C" {

int memClear(u32 ptr, int size);

void FUN_003611b8(u32 block)
{
    memClear(block, 0xb2c8);
}

} /* extern "C" */
