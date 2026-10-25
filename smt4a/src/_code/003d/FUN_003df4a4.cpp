#include "shard/W5_W5Match2_PairedIds.h"

extern "C" PairedIdList *gameGetPlayerData(void);

// Search the four ID pairs in the player data.
extern "C" u32 FUN_003df4a4(u32 id)
{
    PairedIdList *player = gameGetPlayerData();
    for (s32 i = 0; i < 8; ++i) {
        if (player->ids[i] == id)
            return 1;
    }
    return 0;
}
