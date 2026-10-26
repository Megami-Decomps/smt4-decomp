#include "map/lmapMain.h"

extern "C" {
extern LmapSceneA *g_lmapScene;
void FUN_0040ba38(LmapScript *owner, u32 selector);
void FUN_0040b730(LmapScript *owner, u8 channel, u32 selector);
void playerModelLoadByIndex(LmapScript *owner, u8 channel, u32 value, u32 selector);

/* Initializes the three model channels, restoring their saved values when requested. The selector is
 * only set for the three channel indices (it is never read uninitialised). */
void lmapInitializeModelChannels(void)
{
    FUN_0040ba38(g_lmapScene->script, 448);
    if (g_lmapScene->restoreChannelValues != 0) {
        for (s32 i = 0; i < 3; ++i) {
            u32 selector;
            if (i == 0 || i == 1 || i == 2) {
                selector = 7;
            }
            playerModelLoadByIndex(g_lmapScene->script, static_cast<u8>(i), g_lmapScene->channelValues[i], selector);
        }
    } else {
        for (s32 i = 0; i < 3; ++i) {
            u32 selector;
            if (i == 0 || i == 1 || i == 2) {
                selector = 7;
            }
            FUN_0040b730(g_lmapScene->script, static_cast<u8>(i), selector);
        }
    }
}
}
