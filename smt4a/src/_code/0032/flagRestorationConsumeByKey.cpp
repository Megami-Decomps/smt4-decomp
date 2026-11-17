#include "shard/W5_W5Match7_FlagBanks.h"
#include "game/GameStateA.h"
#include "gamedata/GameFlags.h"
#include "map/mapDepart.h"

extern "C" {

/* Consumes active restoration entries with the requested key and raises their completion flags. */
void flagRestorationConsumeByKey(s32 key)
{
    FlagWorkBanks *work = gameFlagsGetBlock();
    for (s32 i = 0; i < work->restoration.count; ++i) {
        if (work->restoration.active[i] != 0 && work->restoration.keys[i] == key) {
            g_gameState.selectionArea = work->restoration.values[i];
            work->restoration.active[i] = 0;
            if (work->restoration.completionFlags[i] != 0) {
                gameFlagSetValue(work->restoration.completionFlags[i], 1, 1);
            }
        }
    }
}
}
