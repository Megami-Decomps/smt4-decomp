#include "map/lmapMain.h"
#include "game/GameStateA.h"
#include "map/mapDepart.h"
#include "shard/W5_W5Match7_FlagBanks.h"

extern "C" {
extern LmapSceneA *g_lmapScene;

/* Changes the scene's main state and clears the state-specific counters and flag-bank work. */
void mapSetSceneState(s32 state)
{
    FlagWorkBanks *flags = gameFlagsGetBlock();
    LmapSceneA *scene = g_lmapScene;
    if (scene->mainState != state) {
        scene->unk04 = 0;
        scene->mainState = state;
        scene->unk08 = 0;
        scene->unk274 = 0;
        scene->unk278 = 0;
        flags->reset.unk1518[0] = 0;
        flags->reset.unk1518[1] = 0;
        if (scene->mainState == 1) {
            scene->time = 5.0f;
        } else {
            if (scene->mainState != 3) {
                g_gameState.unk1B0 = 0;
            }
            if (scene->mainState == 3) {
                scene->unk19C = 0;
            }
        }
    }
}
}
