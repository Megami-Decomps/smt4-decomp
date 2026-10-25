/* Lookup of data table 0 records by identifier. */
#ifndef SMT4A_GAMEDATA_TABLE00LOOKUP_H
#define SMT4A_GAMEDATA_TABLE00LOOKUP_H

#include "gamedata/Table00.h"

extern "C" {

/* The record with `id`: an add-on's own first, else a search of the base table. */
Table00Record *dataTable00FindById(u16 id);

} /* extern "C" */

#endif
