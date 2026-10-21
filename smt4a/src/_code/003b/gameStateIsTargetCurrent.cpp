#include "shard/W5_W5Match7_SceneState.h"

extern "C" {



s32 gameStateIsTargetCurrent(void)
{
    if (g_gameState.target == NULL) {
        return 0;
    }
    if (g_gameState.current != NULL && g_gameState.current == g_gameState.target) {
        return 1;
    }
    return 0;
}

} /* extern "C" */
