#include "shard/Shard003D.h"

extern "C" {

extern PlayerData *gameGetPlayerData(void);
extern void FUN_003dfad4(u16 *table, PlayerData *player);

/* Low 10 bits of entry `index` of the player's packed table. */
u16 playerPackedEntryLow10(s32 index)
{
    u16 table[24];

    FUN_003dfad4(table, gameGetPlayerData());
    return table[index] & 0x3FF;
}

} /* extern "C" */
