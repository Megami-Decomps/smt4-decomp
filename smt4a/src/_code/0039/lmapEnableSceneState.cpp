#include "shard/W5_W5Match7_SceneState.h"
#include "game/GameStateA.h"

extern "C" {

void mapOverlaySetOpen(s32 open);

/* Opens the map overlay. Both navigation modes (g_gameState's byte 0x461) open it the same way;
 * retail still reads the mode before the shared tail call. */
void lmapEnableSceneState(void)
{
    if (g_gameState.unk461 != 0) {
        mapOverlaySetOpen(1);
    } else {
        mapOverlaySetOpen(1);
    }
}

} /* extern "C" */
