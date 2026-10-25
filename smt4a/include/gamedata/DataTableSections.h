/* Fixed data-table section accessors and slot release (the generic ones are in gamedata/DataTable.h). */
#ifndef SMT4A_GAMEDATA_DATATABLESECTIONS_H
#define SMT4A_GAMEDATA_DATATABLESECTIONS_H

#include "common.h"

#ifdef __cplusplus
extern "C" {
#endif

/* Entry data of section `type` of data table 0x33; the first argument is ignored. */
void *dataTable33Entries(void *unused, u32 type);

/* Entry data of section 0 of data table 5. */
void *dataTable5GetEntries(void);

/* Entry count of section 9 of data table 5. */
u32 dataTable5Type9Count(void);

/* Frees data table slot `index`; 0 for a bad index or a locked table. */
u32 dataTableFree(u32 index);

#ifdef __cplusplus
} /* extern "C" */
#endif

extern "C" {
u32 dataTableChooseWeightedByteId(void);
}

#ifdef __cplusplus
extern "C" {
#endif

s32 dataTable33TypeCount(u8 *unused, s32 type);

#ifdef __cplusplus
}
#endif

#endif
