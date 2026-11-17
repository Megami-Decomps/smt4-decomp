#include "gamedata/GameSaveBlocks.h"
#include "shard/GameDataBlocks.h"

extern "C" {
s32 statusGetAvailableChoiceCount(void);

// Clears the first matching ID in the currently unlocked save slots.
void gameClearUnlockedSavedId(u32 id)
{
    PlayerDataIV *player = &g_gameDataBlocks.saveBlock->body.slots.player;
    s32 count = statusGetAvailableChoiceCount();
    for (s32 index = 0; index < count; ++index) {
        if (player->skillChoices[index] == id) {
            player->skillChoices[index] = 0;
            return;
        }
    }
}
}
