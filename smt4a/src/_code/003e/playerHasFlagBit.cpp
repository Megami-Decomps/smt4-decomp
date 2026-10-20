#include "shard/Shard003E.h"

extern "C" {

extern PlayerData *FUN_001801a4(void);

/* True when bit `bit` of the player's flag halfword at +0x5E is set. */
u8 playerHasFlagBit(u32 bit)
{
    PlayerData *player = FUN_001801a4();

    return (player->unk5E & (1 << (bit & 0xFF))) != 0;
}

} /* extern "C" */
