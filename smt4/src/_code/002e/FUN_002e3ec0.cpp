#include "common.h"

extern "C" {

int scrSetResult(int result);
extern u8 *btlGetMainState(void);
extern int scrGetArg(u32 index);

/* Result: whether the larger of the two shorts at +0x4968/+0x496A is at most arg 0. */
u32 FUN_002e3ec0(void)
{
    int arg = scrGetArg(0);
    u8 *btl = btlGetMainState();
    s16 first = *(s16 *)(btl + 0x4968);
    int larger;

    btl = btlGetMainState();
    larger = first;
    if (first < *(s16 *)(btl + 0x496a)) {
        larger = *(s16 *)(btl + 0x496a);
    }
    scrSetResult(larger <= arg);
    return 1;
}

} /* extern "C" */
