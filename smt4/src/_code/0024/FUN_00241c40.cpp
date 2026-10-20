#include "common.h"

extern "C" {

extern u8 *gameGetFlagBlock(void);

u8 FUN_00241c40(int index)
{
    u8 *base = gameGetFlagBlock();

    return base[index * 4 + 0x201];
}

} /* extern "C" */
