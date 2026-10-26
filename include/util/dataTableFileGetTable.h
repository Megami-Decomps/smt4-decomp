/* dataTableFileGetTable.h */
#ifndef INCLUDE_UTIL_DATATABLEFILEGETTABLE_H
#define INCLUDE_UTIL_DATATABLEFILEGETTABLE_H

#include "common.h"

#ifdef __cplusplus
extern "C" {
#endif
/* Table `index` of the table file at address `file`, or NULL if the file or the table header is invalid. */
void *dataTableFileGetTable(u32 file, u32 index);
#ifdef __cplusplus
}
#endif

#endif
