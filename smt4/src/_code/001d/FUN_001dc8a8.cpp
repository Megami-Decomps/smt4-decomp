#include "common.h"

extern "C" {

u16 gameDataBlocksGetCounter(void);
int scrSetResult(u32 result);

u32 FUN_001dc8a8(void)
{
    scrSetResult(gameDataBlocksGetCounter());
    return 1;
}

} /* extern "C" */
