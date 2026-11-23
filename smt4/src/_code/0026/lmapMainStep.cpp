#include "common.h"
#include "map/LmapMainGlobals.h"
#include "game/GameState.h"

extern "C" {


void lmapMainUpdateState(LmapMainState *main);
void FUN_00265180(void);
void mapUpdateFollowerModels(LmapMainState *main);
void lmapMainUpdateFollowCamera(LmapMainState *main);
void lmapRaiseSceneTransition(void);


/* Local map step: runs the external or internal update unless the game state suppresses it, then the common updates; finishes with FUN_00265180 unless the map is 100. */
void lmapMainStep(void)
{
    LmapMainState *main = g_lmapMainState;

    if (g_gameState.suppressStep == 0) {
        if (main->external != 0) {
            lmapRaiseSceneTransition();
        } else {
            lmapMainUpdateState(main);
        }
    }
    lmapMainUpdateFollowCamera(main);
    mapUpdateFollowerModels(main);
    if (g_lmapMainState->mapId != 100) {
        FUN_00265180();
    }
}

} /* extern "C" */
