#include "common.h"

extern "C" {

extern u8 *gameGetFlagBlock(void);

u32 FUN_00298e20(int index)
{
    u8 *base = gameGetFlagBlock();

    return (base[index * 4 + 0x200] & 8) >> 3;
}

} /* extern "C" */
