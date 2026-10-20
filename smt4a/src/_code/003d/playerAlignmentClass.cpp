#include "shard/Shard003D.h"

extern "C" {

extern PlayerData *FUN_001801a4(void);

/* 5 when the player's value at +0x60 is at most -9, 4 when at least 9, else 1. */
u32 playerAlignmentClass(void)
{
    PlayerData *player = FUN_001801a4();
    u32 result;

    if (player->unk60 <= -9) {
        result = 5;
    } else if (player->unk60 >= 9) {
        result = 4;
    } else {
        result = 1;
    }
    return result;
}

} /* extern "C" */
