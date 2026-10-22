#include "shard/W6_W6Match5_CommonBackground.h"

extern "C" {
void jobStop(u32 job, u32 mode);
void asdMemFree(void *memory);
void uiFadeClose();

void campCommonBgRelease()
{
    --g_commonBg.referenceBytes[0];
    if (g_commonBg.referenceBytes[0] <= 0) {
        CommonBackgroundState *background = g_commonBg.background;
        jobStop(background->counters.unk00, 0);
        asdMemFree(background);
        g_commonBg.background = 0;
        g_commonBg.referenceBytes[0] = 0;
        uiFadeClose();
        CommonBackgroundChild *owned = g_commonBg.owned;
        if (owned != 0 && --g_commonBg.referenceBytes[2] <= 0) {
            jobStop(owned->job, 0);
            asdMemFree(owned);
            g_commonBg.owned = 0;
            g_commonBg.referenceBytes[2] = 0;
        }
    }
}
}
