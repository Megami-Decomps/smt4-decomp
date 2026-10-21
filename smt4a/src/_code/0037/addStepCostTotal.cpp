#include "shard/Shard0037.h"

extern "C" {

extern Obj7870Ref g_engineCleanupOwner;
extern PlayerData *gameGetPlayerData(void);
extern s32 FUN_004ccbf0(s32 index);

/* Adds the cost of `count` steps (minus the player's credit) to the counter at +0x7870. */
void addStepCostTotal(s32 count)
{
    Obj7870 *obj = g_engineCleanupOwner.instance;
    PlayerData *player = gameGetPlayerData();
    s32 total = 0;
    s32 i;

    for (i = 0; i < count; i++) {
        total += FUN_004ccbf0(player->unk62 + i);
    }
    total -= player->unk30;
    if (total < 0) {
        total = 0;
    }
    obj->unk7870 += total;
}

} /* extern "C" */
