#include "shard/Shard003E.h"

extern "C" {

extern PlayerData *gameGetPlayerData(void);

/* True when bit `bit` of the player's flag halfword at +0x5E is set. */
u8 playerHasFlagBit(u32 bit)
{
    PlayerData *player = gameGetPlayerData();

    return (player->unk5E & (1 << (bit & 0xFF))) != 0;
}

} /* extern "C" */
