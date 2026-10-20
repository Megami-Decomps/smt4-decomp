#include "common.h"

extern "C" {

int memClear(u16 *ptr, int size);

void FUN_00361140(u16 *block)
{
    memClear(block, 0xe30);
    *block = 2;
}

} /* extern "C" */
