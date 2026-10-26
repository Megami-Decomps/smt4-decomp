/* NON_MATCHING: retail reads the active flag through a pooled 0x15f4 register offset (one literal) while the build folds the offset with two adds; the area halfword now goes through the 0x200 game-state alias like retail. */
#include "shard/W5_W5Match7_FlagBanks.h"
#include "gamedata/GameFlags.h"
#include "map/mapDepart.h"

extern "C" {
extern GameStateA g_gameState;

/* The area record 0x200 into the game state; only its selected-area halfword is written here. */
struct GameStateAreaView {
    u8 unk00[0x86];
    u16 area;
};


/* Consumes active restoration entries with the requested key and raises their completion flags. */
void FUN_003278c8(s32 key)
{
    FlagWorkBanks *work = gameFlagsGetBlock();
    for (s32 i = 0; i < work->restoration.count; ++i) {
        if (work->restoration.active[i] != 0 && work->restoration.keys[i] == key) {
            reinterpret_cast<GameStateAreaView *>(reinterpret_cast<u8 *>(&g_gameState) + 0x200)->area = work->restoration.values[i];
            work->restoration.active[i] = 0;
            if (work->restoration.completionFlags[i] != 0) {
                gameFlagSetValue(work->restoration.completionFlags[i], 1, 1);
            }
        }
    }
}
}
