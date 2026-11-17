#include "shard/GameDataBlocks.h"
extern "C" s32 statusGetAvailableChoiceCount(void);

extern "C" s32 statusCountSelectableChoices(void)
{
    s32 used = 0;
    PlayerDataIV *player = &g_gameDataBlocks.saveBlock->body.slots.player;
    s32 count = statusGetAvailableChoiceCount();
    for (s32 index = 0; index < count; ++index) {
        if (player->skills[index] != 0) {
            ++used;
        }
    }
    return used;
}
