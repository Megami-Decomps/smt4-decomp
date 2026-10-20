#include "common.h"

extern "C" {

extern u8 *gameGetMapBlock(void);

u8 FUN_002df80c(int index)
{
    u8 *work = gameGetMapBlock();

    return work[index + 0xc18];
}

} /* extern "C" */
