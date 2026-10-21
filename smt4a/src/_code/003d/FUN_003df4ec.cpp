#include "shard/W6_W6Match5_PairedIdFlags.h"

extern "C" PairedIdList *gameGetPlayerData(void);

// Clear the first matching player-data ID and its per-entry flag.
extern "C" void FUN_003df4ec(u32 id)
{
    PairedIdFlagsView *player = reinterpret_cast<PairedIdFlagsView *>(gameGetPlayerData());
    for (s32 i = 0; i < 8; ++i) {
        if (player->paired.ids[i] == id) {
            player->paired.ids[i] = 0;
            player->flags[i] = 0;
            return;
        }
    }
}
