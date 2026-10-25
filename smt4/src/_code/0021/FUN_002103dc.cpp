/* NON_MATCHING: compiler factors repeated filesystem module/range tests; retail retains separate checks. */
#include "sys/ProcessResult.h"
#include "nn/Result.h"

extern "C" {
extern u8 DAT_00465210;
u32 FUN_002c3414();
u32 FUN_00354b88(u32 handle);

// Poll content mounting, caching success and classifying the supported filesystem error ranges.
u32 FUN_002103dc()
{
    if (DAT_00465210)
        return 2;
    u32 result = FUN_00354b88(FUN_002c3414());
    FUN_002c3510(result);
    if (nnResultIsSuccess(result)) {
        DAT_00465210 = 1;
        return 1;
    }
    u32 module = nnResultModule(result);
    s32 description = nnResultDescription(result);
    if ((module != 17 || description < 340 || description >= 360) &&
        (module != 17 || description < 360 || description >= 390) &&
        (module != 17 || description < 390 || description >= 400))
        return 0;
    return description >= 340 && description < 360 ? 3 : 4;
}
}
