#include "shard/Shard003E.h"

extern "C" {

extern PlayerData *FUN_001801a4(void);

void playerClearFlagMask(u16 mask)
{
    PlayerData *player = FUN_001801a4();

    player->unk5E &= ~mask;
}

} /* extern "C" */
