#include "map/LmapGlobals.h"

extern "C" {
void playerModelStartBaseMotion(LmapScript *owner, u32 selector);
void playerLoadOutfitPartModel(LmapScript *owner, u8 channel, u32 selector);
void playerModelLoadByIndex(LmapScript *owner, u8 channel, u32 value, u32 selector);

/* Initializes the three model channels, restoring their saved values when requested. The selector is
 * only set for the three channel indices (it is never read uninitialised). */
void lmapInitializeModelChannels(void)
{
    playerModelStartBaseMotion(g_lmapScene->playerModel, 448);
    if (g_lmapScene->restoreChannelValues != 0) {
        for (s32 i = 0; i < 3; ++i) {
            u32 selector;
            if (i == 0 || i == 1 || i == 2) {
                selector = 7;
            }
            playerModelLoadByIndex(g_lmapScene->playerModel, static_cast<u8>(i), g_lmapScene->channelValues[i], selector);
        }
    } else {
        for (s32 i = 0; i < 3; ++i) {
            u32 selector;
            if (i == 0 || i == 1 || i == 2) {
                selector = 7;
            }
            playerLoadOutfitPartModel(g_lmapScene->playerModel, static_cast<u8>(i), selector);
        }
    }
}
}
