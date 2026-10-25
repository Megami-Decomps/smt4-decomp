#include "battle/BtlMainAccess.h"
#include "common.h"

extern "C" {

int scrSetResult(int result);
extern int scrGetArg(u32 index);

/* Result: whether the larger of the two shorts at +0x4968/+0x496A is at most arg 0. */
u32 FUN_002e3ec0(void)
{
    int arg = scrGetArg(0);
    BtlMainState *btl = btlGetMainState();
    s16 first = btl->menuCursor.x;
    int larger;

    btl = btlGetMainState();
    larger = first;
    if (first < btl->menuCursor.y) {
        larger = btl->menuCursor.y;
    }
    scrSetResult(larger <= arg);
    return 1;
}

} /* extern "C" */
