#include "shard/Shard0037.h"
#include "gamedata/GamePlayerData.h"

extern "C" {

extern Obj7870Ref g_engineCleanupOwner;
extern s32 levelGetExpRequirement(s32 index);

/* Adds the cost of `count` steps (minus the player's credit) to the counter at +0x7870. */
void addStepCostTotal(s32 count)
{
    Obj7870 *obj = g_engineCleanupOwner.instance;
    PlayerDataA *player = gameGetPlayerData();
    s32 total = 0;
    s32 i;

    for (i = 0; i < count; i++) {
        total += levelGetExpRequirement(player->level + i);
    }
    total -= player->experience;
    if (total < 0) {
        total = 0;
    }
    obj->unk7870 += total;
}

} /* extern "C" */
