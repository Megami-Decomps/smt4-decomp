#include "shard/Shard0034.h"

extern "C" {

extern s32 scrGetArg(s32 index);
extern void FUN_00480fc0(u32 id, s32 amount);
extern void FUN_00480e30(u32 id, s32 amount);
extern u8 FUN_003311b8(void);
extern void FUN_00169ddc(u32 value);
extern u32 FUN_002e486c(s32 amount);

/* Script command: FUN_00480e30 / FUN_00480fc0 (negative values) with arguments 0 and 1. */
u32 scrCommAddOrRemove(void)
{
    u32 id = scrGetArg(0);
    s32 amount = scrGetArg(1);

    if (amount < 0) {
        FUN_00480fc0(id, -amount);
    } else {
        FUN_00480e30(id, amount);
    }
    if (FUN_003311b8() != 0) {
        FUN_00169ddc(0x1000215);
        FUN_002e486c(amount);
    }
    return 1;
}

} /* extern "C" */
