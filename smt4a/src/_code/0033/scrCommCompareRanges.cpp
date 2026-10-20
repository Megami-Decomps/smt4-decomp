#include "shard/Shard0033.h"

extern "C" {

extern u32 *FUN_002360dc(s32 index);
extern u32 *gameBlockGetArea221AA(void);
extern s32 FUN_0019a37c(u32 *a, u32 *b, u32 size);
extern void scrSetResult(s32 value);

/* Script command: result is 1 when the two ranges FUN_0019a37c compares are equal. */
u32 scrCommCompareRanges(s32 argIndex)
{
    u32 *a = FUN_002360dc(argIndex);
    u32 *b = gameBlockGetArea221AA();

    scrSetResult(FUN_0019a37c(a, b, 0x12) == 0);
    return 1;
}

} /* extern "C" */
