#include "map/lmapMain.h"
#include "shard/W5_W5Match7_FlagBanks.h"

extern "C" {

void FUN_003fd7c0(u32 handle, u32 mode, u32 flags, f32 value);

extern LmapSceneA *g_lmapScene; /* 0x581288 */

/* Puts the map scene into state 12 and plays the default motion on both of its actors. */
u32 FUN_00331110(void)
{
    gameFlagsGetBlock();
    g_lmapScene->unk1D0 = 12;
    g_lmapScene->flag23D = 1;
    g_lmapScene->unk228 = 1;
    g_lmapScene->unk240 = 0.0f;
    FUN_003fd7c0(g_lmapScene->actor180->controller, 0, 2, 0.0f);
    g_lmapScene->unk1D4 = 0;
    g_lmapScene->unk248 = 0;
    g_lmapScene->unk238 = 1;
    FUN_003fd7c0(g_lmapScene->actor18C->controller, 0, 2, 0.0f);
    return 1;
}

} /* extern "C" */
