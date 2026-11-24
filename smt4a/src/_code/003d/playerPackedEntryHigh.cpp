#include "shard/Shard003D.h"
#include "gamedata/GamePlayerData.h"
#include "code/Code003d_Smt4a.h"

extern "C" {
extern void demonBuildAffinitySlots(u16 *table, PlayerDataA *player);

/* High bits (>> 10) of entry `index` of the player's packed table. */
u16 playerPackedEntryHigh(s32 index)
{
    u16 table[24];

    demonBuildAffinitySlots(table, gameGetPlayerData());
    return table[index] >> 10;
}

} /* extern "C" */
