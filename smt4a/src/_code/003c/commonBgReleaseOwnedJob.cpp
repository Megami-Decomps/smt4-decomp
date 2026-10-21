#include "shard/W6_W6Match5_CommonBackground.h"

extern "C" {
void jobStop(u32 job, s32 reason);
void asdMemFree(void* block);

// Release the shared background's job when its signed byte reference count expires.
void commonBgReleaseOwnedJob(void)
{
    --g_commonBg.referenceBytes[2];
    if (g_commonBg.referenceBytes[2] <= 0 && g_commonBg.owned != NULL) {
        CommonBackgroundChild* owned = g_commonBg.owned;
        jobStop(owned->job, 0);
        asdMemFree(owned);
        g_commonBg.owned = NULL;
        g_commonBg.referenceBytes[2] = 0;
    }
}
}
