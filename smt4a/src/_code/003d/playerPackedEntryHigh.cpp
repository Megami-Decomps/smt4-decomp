#include "shard/Shard003D.h"

extern "C" {

extern PlayerData *gameGetPlayerData(void);
extern void demonBuildAffinitySlots(u16 *table, PlayerData *player);

/* High bits (>> 10) of entry `index` of the player's packed table. */
u16 playerPackedEntryHigh(s32 index)
{
    u16 table[24];

    demonBuildAffinitySlots(table, gameGetPlayerData());
    return table[index] >> 10;
}

} /* extern "C" */
