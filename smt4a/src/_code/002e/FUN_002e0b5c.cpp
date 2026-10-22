/* NON_MATCHING: compiler factors repeated filesystem module/range tests; retail retains separate checks. */
#include "nn/Result.h"

extern "C" {
extern u8 DAT_005b40c8;
u32 globalBlockGetFirst();
u32 FUN_00429d98(u32 handle);
void FUN_0013ebd8(u32 result);

// Poll content mounting, caching success and classifying the supported filesystem error ranges.
u32 FUN_002e0b5c()
{
    if (DAT_005b40c8)
        return 2;
    u32 result = FUN_00429d98(globalBlockGetFirst());
    FUN_0013ebd8(result);
    if (nnResultIsSuccess(result)) {
        DAT_005b40c8 = 1;
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
