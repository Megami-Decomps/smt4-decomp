#include "common.h"

extern "C" {

extern u8 *gameGetFlagBlock(void);

u32 questIsCompleted(int index)
{
    u8 *base = gameGetFlagBlock();

    return (base[index * 4 + 0x200] & 8) >> 3;
}

} /* extern "C" */
