#include "common.h"

extern "C" {

extern u8 *gameGetFlagBlock(void);

u32 FUN_00298dc8(int index)
{
    u8 *base = gameGetFlagBlock();

    return (base[index * 4 + 0x200] & 2) >> 1;
}

} /* extern "C" */
