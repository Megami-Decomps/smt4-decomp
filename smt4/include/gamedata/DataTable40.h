#ifndef SMT4_GAMEDATA_DATATABLE40_H
#define SMT4_GAMEDATA_DATATABLE40_H

#include "common.h"
#include "gamedata/Table04Record.h"

#ifdef __cplusplus
extern "C" {
#endif

/* Finds the record of data table 4/0 with `id` (0x68-byte stride; read through the Table04Record view
 * by the callers): the add-on content's override first, else a search of the table. */
Table04Record *dataTable40FindById(u32 id);

#ifdef __cplusplus
}
#endif

#endif
