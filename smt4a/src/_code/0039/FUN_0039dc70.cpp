#include "common.h"

extern "C" {

s32 scrGetArg(u32 index);
s32 gameStockContainsEntry(u16 entry);
s32 scrSetResult(s32 value);

/* Script command: returns whether the game stock contains the entry in argument zero. */
s32 FUN_0039dc70(void)
{
    scrSetResult(gameStockContainsEntry(scrGetArg(0)) != 0);
    return 1;
}

} /* extern "C" */
