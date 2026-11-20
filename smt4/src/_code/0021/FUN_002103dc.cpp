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
extern u8 g_contentMounted;
u32 globalBlockGetFirst();
nn::Result FUN_00354b88(u32 handle);

// Poll content mounting, caching success and classifying the supported filesystem error ranges.
u32 FUN_002103dc()
{
    u32 status = 1;
    nn::Result result;
    if (g_contentMounted)
        return 2;
    result = FUN_00354b88(globalBlockGetFirst());
    processResultSetValue(result);
    u32 failed = result & 0x80000000;
    if ((s32)failed >= 0) {
        g_contentMounted = 1;
    } else {
        if (fsResultInRange340(result) || fsResultInRange360(result) || fsResultInRange390(result))
            status = fsResultInRange340(result) ? 3 : 4;
        else
            return 0;
    }
    return status;
}
}
