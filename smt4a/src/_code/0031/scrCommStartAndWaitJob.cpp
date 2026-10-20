#include "shard/Shard0031.h"

extern "C" {

extern u32 FUN_0039b2d0(u32 a, u32 b, u32 c, u32 d);
extern u32 DAT_0057f4a8;
extern s32 jobIsValid(u32 job);
extern u32 scrGetArg(s32 index);
extern u32 FUN_002360dc(s32 index);
extern s32 FUN_002deb84(void);

/* Script command: starts FUN_0039b2d0 once, then keeps returning 1 until its job is no longer valid. */
u32 scrCommStartAndWaitJob(void)
{
    u32 a = FUN_002360dc(0);
    u32 b = scrGetArg(1);
    u32 c = scrGetArg(2);
    u32 d = scrGetArg(3);

    if (FUN_002deb84() != 0) {
        if (jobIsValid(DAT_0057f4a8) == 0) {
            return 1;
        }
    } else {
        DAT_0057f4a8 = FUN_0039b2d0(a, b, c, d);
    }
    return 0;
}

} /* extern "C" */
