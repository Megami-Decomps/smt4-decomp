#include "shard/Shard003B.h"

extern "C" {

extern Flags0C0C *FUN_00162e8c(void);
extern s32 scrGetArg(s32 index);
extern void scrSetResult(s32 value);

/* Script command: result is whether halfword `argument 0` of the game block's table at +0xD90 is zero. */
u32 scrCommIsHalfZero(void)
{
    Flags0C0C *flags = FUN_00162e8c();
    s32 index = scrGetArg(0);

    scrSetResult(flags->halves[index] == 0);
    return 1;
}

} /* extern "C" */
