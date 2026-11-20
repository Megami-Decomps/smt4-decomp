#include "common.h"

extern "C" {

extern u8 *gameGetFlagBlock(void);

u8 questGetDetailPageCount(int index)
{
    u8 *base = gameGetFlagBlock();

    return base[index * 4 + 0x201];
}

} /* extern "C" */
