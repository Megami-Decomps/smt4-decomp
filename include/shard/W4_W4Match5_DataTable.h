#ifndef W4_W4MATCH5_DATATABLE_H
#define W4_W4MATCH5_DATATABLE_H

#include "common.h"

/* The data-table accessors the game's data code calls (twin names in both games). */
extern "C" {

void *dataTableGet(s32 table, s32 slot);
s32 dataTableGetCount(void *table);

}

/* File-local accessor for a data table section. The original code reaches dataTableGet through
 * a small function that armcc inlines (it materialises the arguments in call order). */
static void *dataTableGetSection(s32 table, s32 slot)
{
    return dataTableGet(table, slot);
}

#endif
