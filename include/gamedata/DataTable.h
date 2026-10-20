/* The game's data tables: dataTableGet(table, section) finds one section of a table; the entries and
 * their count are read from that section. */
#ifndef GAMEDATA_DATATABLE_H
#define GAMEDATA_DATATABLE_H

#include "common.h"

#ifdef __cplusplus
extern "C" {
#endif

void *dataTableGet(int table, int section);
void *dataTableGetEntries(void *section);
u32 dataTableGetCount(void *section);

#ifdef __cplusplus
}
#endif

#endif
