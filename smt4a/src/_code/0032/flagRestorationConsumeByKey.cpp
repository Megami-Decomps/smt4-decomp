#include "gamedata/MapSaveBlockA.h"
#include "game/GameStateA.h"
#include "gamedata/GameFlags.h"
#include "map/mapDepart.h"

extern "C" {

/* Consumes active restoration entries with the requested key and raises their completion flags. */
void flagRestorationConsumeByKey(s32 key)
{
    MapSaveBlockA *work = gameFlagsGetBlock();
    for (s32 i = 0; i < work->slotCount; ++i) {
        if (work->slotActive[i] != 0 && work->slotKey[i] == key) {
            g_gameState.selectionArea = work->slotValues[i];
            work->slotActive[i] = 0;
            if (work->slotFlag[i] != 0) {
                gameFlagSetValue(work->slotFlag[i], 1, 1);
            }
        }
    }
}
}
