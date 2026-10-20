#include "shard/Shard003D.h"

extern "C" {

extern PlayerData *FUN_001801a4(void);
extern void FUN_003dfad4(u16 *table, PlayerData *player);

/* High bits (>> 10) of entry `index` of the player's packed table. */
u16 playerPackedEntryHigh(s32 index)
{
    u16 table[24];

    FUN_003dfad4(table, FUN_001801a4());
    return table[index] >> 10;
}

} /* extern "C" */
