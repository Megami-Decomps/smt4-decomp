/* NON_MATCHING: Retail retains redundant per-index selector dispatch in both three-channel loops; valid-domain calls use the common selector directly. */
#include "map/lmapMain.h"

extern "C" {
extern LmapScene *g_lmapScene;
void playerModelListCreate(LmapScript *owner, u32 selector);
void playerModelLoadPart(LmapScript *owner, u8 channel, u32 selector);
void FUN_00343c58(LmapScript *owner, u8 channel, u32 value, u32 selector);

/* Initializes the three model channels, restoring their saved values when requested. */
void FUN_001b491c(void)
{
    playerModelListCreate(g_lmapScene->script, 448);
    if (g_lmapScene->restoreChannelValues == 0) {
        for (s32 i = 0; i < 3; ++i) {
            playerModelLoadPart(g_lmapScene->script, static_cast<u8>(i), 448);
        }
    } else {
        for (s32 i = 0; i < 3; ++i) {
            FUN_00343c58(g_lmapScene->script, static_cast<u8>(i), g_lmapScene->channelValues[i], 448);
        }
    }
}
}
