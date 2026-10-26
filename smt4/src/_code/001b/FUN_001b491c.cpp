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
    if (g_lmapScene->restoreChannelValues != 0) {
        for (s32 i = 0; i < 3; ++i) {
            u32 selector; /* retail leaves it unset for indices outside 0..2 */
            if (i == 0 || i == 1 || i == 2) {
                selector = 448;
            }
            FUN_00343c58(g_lmapScene->script, static_cast<u8>(i), g_lmapScene->channelValues[i], selector);
        }
    } else {
        for (s32 i = 0; i < 3; ++i) {
            u32 selector; /* retail leaves it unset for indices outside 0..2 */
            if (i == 0 || i == 1 || i == 2) {
                selector = 448;
            }
            playerModelLoadPart(g_lmapScene->script, static_cast<u8>(i), selector);
        }
    }
}
}
