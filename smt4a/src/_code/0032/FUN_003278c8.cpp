/* NON_MATCHING: The active-slot offset is synthesized instead of literal-loaded, and the state destination uses its canonical global rather than the retail interior alias. */
#include "shard/W5_W5Match7_FlagBanks.h"
#include "map/mapDepart.h"

extern "C" {
extern GameStateA g_gameState;
void gameFlagSetValue(s32 flag, s32 value, s32 notify);

/* Consumes active restoration entries with the requested key and raises their completion flags. */
void FUN_003278c8(s32 key)
{
    FlagWorkBanks *work = gameFlagsGetBlock();
    for (s32 i = 0; i < work->restoration.count; ++i) {
        if (work->restoration.active[i] != 0 && work->restoration.keys[i] == key) {
            g_gameState.request.unk286 = work->restoration.values[i];
            work->restoration.active[i] = 0;
            if (work->restoration.completionFlags[i] != 0) {
                gameFlagSetValue(work->restoration.completionFlags[i], 1, 1);
            }
        }
    }
}
}
