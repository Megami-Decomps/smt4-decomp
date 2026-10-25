/* Section accessors of data table 0x33 (smt4); the first argument of both is ignored. */
#ifndef SMT4_GAMEDATA_DATATABLE33_H
#define SMT4_GAMEDATA_DATATABLE33_H

#include "common.h"

extern "C" {

/* Entry data of section `section` of data table 0x33. */
void *dataTable33GetEntries(void *unused, s32 section);

/* Entry count of section `section` of data table 0x33. */
s32 FUN_0022afb0(void *unused, s32 section);

} /* extern "C" */

#endif
