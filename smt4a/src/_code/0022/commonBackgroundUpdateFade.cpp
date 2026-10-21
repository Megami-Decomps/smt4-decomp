/* NON_MATCHING: global/zero constants swap r6/r7, and the owned-child null/keepAlive test is predicated rather than branched; candidate -O2. */
#include "shard/W6_W6Match5_CommonBackground.h"

extern "C" {
bool FUN_002ef9f0();
s32 gameFlagIsSet(u32 flag);
void jobStop(u32 job, s32 reason);
void asdMemFree(void *memory);

u32 commonBackgroundUpdateFade()
{
    CommonBackgroundState *background = g_commonBg.background;
    if (background == NULL) {
        return 0;
    }
    switch (background->state) {
    case 0:
    case 3:
        break;
    case 1:
        background->progress = 1.0f - static_cast<f32>(background->signedTimer) * 0.125f;
        if (background->signedTimer >= 8) {
            background->progress = 0.0f;
            background->state = 3;
        }
        break;
    case 2:
        background->progress = static_cast<f32>(background->signedTimer) * 0.125f;
        if (background->signedTimer >= 8) {
            background->progress = 1.0f;
            background->state = 0;
            background->signedTimer = 0;
        }
        break;
    case 4:
        background->progress = static_cast<f32>(background->signedTimer) * 0.125f;
        if (background->signedTimer >= 8) {
            background->state = 1;
            background->unk0c = 0;
            background->progress = 1.0f;
            background->signedTimer = 0;
        }
        break;
    case 5:
        background->progress = static_cast<f32>(background->signedTimer) * 0.125f;
        if (background->signedTimer >= 8) {
            background->unk0c = 1;
            background->progress = 1.0f;
            background->signedTimer = 0;
            background->state = 1;
        }
        break;
    }
    if (!FUN_002ef9f0()) {
        if (g_commonBg.owned == NULL || g_commonBg.owned->keepAlive == 0) {
            if (gameFlagIsSet(0x11)) {
                CommonBackgroundChild *owned = g_commonBg.owned;
                if (owned != NULL && --g_commonBg.referenceBytes[2] <= 0) {
                    jobStop(owned->job, 0);
                    asdMemFree(owned);
                    g_commonBg.owned = NULL;
                    g_commonBg.referenceBytes[2] = 0;
                }
            }
        }
    }
    ++background->counters.frame;
    ++background->signedTimer;
    return 0;
}
}
