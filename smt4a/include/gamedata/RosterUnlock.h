/* Apocalypse's roster entry unlock and activation. */
#ifndef SMT4A_GAMEDATA_ROSTERUNLOCK_H
#define SMT4A_GAMEDATA_ROSTERUNLOCK_H

#include "common.h"

extern "C" {

/* Makes a roster id available and sets its linked saved flag, if any. */
void gameFlagUnlockEntryById(u16 id);
/* Adds a unit to the active roster or stock if possible. */
u32 rosterAddUnit(u16 id);
/* Tests whether the entry's quest record allows activation (its flag bit 0 is clear). */
u32 itemDataIsFlagClear(u32 id);

} /* extern "C" */

#endif
