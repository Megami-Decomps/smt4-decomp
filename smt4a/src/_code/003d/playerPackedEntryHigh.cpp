#include "shard/Shard003D.h"

extern "C" {

extern PlayerData *gameGetPlayerData(void);
extern void FUN_003dfad4(u16 *table, PlayerData *player);

/* High bits (>> 10) of entry `index` of the player's packed table. */
u16 playerPackedEntryHigh(s32 index)
{
    u16 table[24];

    FUN_003dfad4(table, gameGetPlayerData());
    return table[index] >> 10;
}

} /* extern "C" */
