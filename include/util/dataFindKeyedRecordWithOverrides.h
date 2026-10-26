/* dataFindKeyedRecordWithOverrides.h */
#ifndef INCLUDE_UTIL_DATAFINDKEYEDRECORDWITHOVERRIDES_H
#define INCLUDE_UTIL_DATAFINDKEYEDRECORDWITHOVERRIDES_H

#include "common.h"

#ifdef __cplusplus
extern "C" {
#endif
/* The record of table 11 keyed `id` (a built-in override record for a few ids, else a search of the
 * table's entries). The record layout depends on the caller's use. */
const void *dataFindKeyedRecordWithOverrides(u32 id);
#ifdef __cplusplus
}
#endif

#endif
