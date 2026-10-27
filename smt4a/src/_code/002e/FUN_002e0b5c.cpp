/* NON_MATCHING: register allocation only: retail keeps the status code in r4 and the result in r5 (copying it into r0 for the range tests), the build the other way round (58 vs 57 rows); the three separate module/range checks now match. */
#include "sys/ProcessResult.h"
#include "nn/Result.h"

/* Filesystem (module 17) result descriptions 340-359. */
static __inline bool fsResultInRange340(nn::Result result)
{
    return nnResultModule(result) == 17 && nnResultDescriptionBits(result) >= 340 && nnResultDescriptionBits(result) < 360;
}

/* Filesystem (module 17) result descriptions 360-389. */
static __inline bool fsResultInRange360(nn::Result result)
{
    return nnResultModule(result) == 17 && nnResultDescriptionBits(result) >= 360 && nnResultDescriptionBits(result) <= 389;
}

/* Filesystem (module 17) result descriptions 390-399. */
static __inline bool fsResultInRange390(nn::Result result)
{
    return nnResultModule(result) == 17 && nnResultDescriptionBits(result) >= 390 && nnResultDescriptionBits(result) < 400;
}

extern "C" {
extern u8 DAT_005b40c8;
u32 globalBlockGetFirst();
nn::Result FUN_00429d98(u32 handle);

// Poll content mounting, caching success and classifying the supported filesystem error ranges.
u32 FUN_002e0b5c()
{
    u32 status = 1;
    if (DAT_005b40c8)
        return 2;
    nn::Result result = FUN_00429d98(globalBlockGetFirst());
    FUN_0013ebd8(result);
    u32 failed = result & 0x80000000;
    if ((s32)failed >= 0) {
        DAT_005b40c8 = 1;
    } else {
        if (!fsResultInRange340(result) && !fsResultInRange360(result) && !fsResultInRange390(result))
            return 0;
        status = fsResultInRange340(result) ? 3 : 4;
    }
    return status;
}
}
