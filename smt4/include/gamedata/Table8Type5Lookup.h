/* Lookup of data table 8 type 5 records by identifier. */
#ifndef SMT4_GAMEDATA_TABLE8TYPE5LOOKUP_H
#define SMT4_GAMEDATA_TABLE8TYPE5LOOKUP_H

#include "gamedata/Table8Type5Record.h"

extern "C" {

/* The record with `id`: the add-on lookup's answer first, else a search of the table (NULL when absent). */
Table8Type5Record *table8Type5FindById(u32 id);

} /* extern "C" */

#endif
