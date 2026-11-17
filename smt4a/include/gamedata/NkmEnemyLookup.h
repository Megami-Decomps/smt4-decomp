/* Lookup of data table 0 records by identifier. */
#ifndef SMT4A_GAMEDATA_TABLE00LOOKUP_H
#define SMT4A_GAMEDATA_TABLE00LOOKUP_H

#include "gamedata/NkmEnemyRecord.h"

extern "C" {

/* The record with `id`: an add-on's own first, else a search of the base table. Retail's definition
   takes a u16 (it only stores the halfword), but its callers pass ids unextended, so they see a u32;
   the definition file (nkmEnemyFindById.cpp) defines TABLE00_OWN_PROTOTYPE and declares the u16 one. */
#ifndef TABLE00_OWN_PROTOTYPE
NkmEnemyRecordA *nkmEnemyFindById(u32 id);
#endif

} /* extern "C" */

#endif
