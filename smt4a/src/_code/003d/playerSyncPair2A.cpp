#include "shard/Shard003D.h"

extern "C" {

extern PlayerData *gameGetPlayerData(void);

/* Copies the player's +0x1C/+0x1E pair to +0x2A/+0x2C (for both fetches) after clearing +0x5E. */
void playerSyncPair2A(void)
{
    PlayerData *first = gameGetPlayerData();
    PlayerData *second;

    first->unk5E = 0;
    second = gameGetPlayerData();
    second->unk2A = second->unk1C;
    second->unk2C = second->unk1E;
    first->unk2A = first->unk1C;
    first->unk2C = first->unk1E;
}

} /* extern "C" */
