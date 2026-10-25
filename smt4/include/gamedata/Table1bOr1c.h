/* Records of data table 0x1b/0x1c (see dataTable1bOr1cGetRecord). */
#ifndef SMT4_GAMEDATA_TABLE1BOR1C_H
#define SMT4_GAMEDATA_TABLE1BOR1C_H

#include "common.h"

extern "C" {

/* The byte at +6 of record `id` (0 when there is no record). */
s32 table1bOr1cGetRecordValue(u32 id);

} /* extern "C" */

#endif
