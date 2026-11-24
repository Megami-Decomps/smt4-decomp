#include "shard/Shard003D.h"
#include "gamedata/GamePlayerData.h"
#include "code/Code003d_Smt4a.h"

extern "C" {
extern void demonBuildAffinitySlots(u16 *table, PlayerDataA *player);

/* Low 10 bits of entry `index` of the player's packed table. */
s32 playerPackedEntryLow10(s32 index)
{
    u16 table[24];

    demonBuildAffinitySlots(table, gameGetPlayerData());
    return table[index] & 0x3FF;
}

} /* extern "C" */
