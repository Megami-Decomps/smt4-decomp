#include "map/LmapGlobals.h"
#include "shard/W6_W6Match1_BattleStageModelA.h"
#include "status/StatusBustUp.h"

extern "C" {
void playerModelListCreate(Obj4206e8 *owner, u32 selector);

/* Initializes the three model channels, restoring their saved values when requested. */
void FUN_001b491c(void)
{
    playerModelListCreate(g_lmapScene->playerModel, 448);
    if (g_lmapScene->restoreChannelValues != 0) {
        for (s32 i = 0; i < 3; ++i) {
            u32 selector; /* retail leaves it unset for indices outside 0..2 */
            if (i == 0 || i == 1 || i == 2) {
                selector = 448;
            }
            FUN_00343c58(reinterpret_cast<u32>(g_lmapScene->playerModel), static_cast<u8>(i), g_lmapScene->channelValues[i], selector);
        }
    } else {
        for (s32 i = 0; i < 3; ++i) {
            u32 selector; /* retail leaves it unset for indices outside 0..2 */
            if (i == 0 || i == 1 || i == 2) {
                selector = 448;
            }
            playerModelLoadPart(reinterpret_cast<u32>(g_lmapScene->playerModel), static_cast<u8>(i), selector);
        }
    }
}
}
