/* The game data's per-(group, item) entry table: a 4-byte state entry for every key pair listed in
 * data table 2 section 3. */
#ifndef SMT4A_GAMEDATA_GAMEDATAENTRIES_H
#define SMT4A_GAMEDATA_GAMEDATAENTRIES_H

#include "common.h"
#include "gamedata/ItemFlagState.h"

extern "C" {

/* Index of the key pair (`groupId`, `itemId`) in data table 2 section 3 (0 when absent). */
s32 gameDataFindEntryIndex(u32 groupId, u32 itemId);

/* The saved state entry of the key pair (`groupId`, `itemId`). */
ItemFlagCacheState *gameDataGetTableEntry(u32 groupId, u32 itemId);

} /* extern "C" */

#endif
