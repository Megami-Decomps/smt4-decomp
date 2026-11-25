/* IV: gameGetUnitRecord(), the saved unit records of the save block's slot table (StatBlock in
 * gamedata/UnitStats.h, SaveSlotTableIV.units in gamedata/GameSaveData.h). */
#ifndef SMT4_GAMEDATA_UNITRECORDACCESS_H
#define SMT4_GAMEDATA_UNITRECORDACCESS_H

#include "common.h"
#include "gamedata/UnitStats.h"

extern "C" {

/* The 0x604-byte saved record of slot table entry `index`. */
StatBlock *gameGetUnitRecord(u32 index);

/* Initializes a transient unit record for the given demon id. */
void unitInitializeFromSavedRecord(u32 id, StatBlock *unit);

} /* extern "C" */

#endif
