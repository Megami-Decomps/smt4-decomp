#pragma once
#include "common.h"

/* Data-table accessors. */
extern "C" {

/* Table `index` of the table file at address `file`, or NULL if the file or the table header is invalid. */
void *dataTableFileGetTable(u32 file, u32 index);

} /* extern "C" */
