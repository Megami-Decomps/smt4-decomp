#include "sys/ProcessResult.h"
#include "nn/FsResult.h"

extern "C" {
extern u8 g_contentMounted;
u32 globalBlockGetFirst();
nn::Result FUN_00429d98(u32 handle);

// Poll content mounting, caching success and classifying the supported filesystem error ranges.
u32 FUN_002e0b5c()
{
    u32 status = 1;
    nn::Result result;
    if (g_contentMounted)
        return 2;
    result = FUN_00429d98(globalBlockGetFirst());
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
