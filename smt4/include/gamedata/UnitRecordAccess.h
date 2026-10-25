/* Access to the saved unit records (smt4). */
#ifndef SMT4_GAMEDATA_UNITRECORDACCESS_H
#define SMT4_GAMEDATA_UNITRECORDACCESS_H

#include "common.h"

extern "C" {

/* The 0x604-byte saved record of party slot `index`. */
void *gameGetUnitRecord(u32 index);

} /* extern "C" */

#endif
