#include "shard/Shard0034.h"

extern "C" {

extern s32 scrGetArg(s32 index);
extern void flagValueSub(u32 id, s32 amount);
extern void flagValueAdd(u32 id, s32 amount);
extern u8 FUN_003311b8(void);
extern void eventQueueAddUnique(u32 value);
extern u32 FUN_002e486c(s32 amount);

/* Script command: flagValueAdd / flagValueSub (negative values) with arguments 0 and 1. */
u32 scrCommAddOrRemove(void)
{
    u32 id = scrGetArg(0);
    s32 amount = scrGetArg(1);

    if (amount < 0) {
        flagValueSub(id, -amount);
    } else {
        flagValueAdd(id, amount);
    }
    if (FUN_003311b8() != 0) {
        eventQueueAddUnique(0x1000215);
        FUN_002e486c(amount);
    }
    return 1;
}

} /* extern "C" */
