/* Position and range of a texture table entry (smt4). */
#ifndef SMT4_ASDSDK_TEXTABLEENTRYRANGE_H
#define SMT4_ASDSDK_TEXTABLEENTRYRANGE_H

#include "common.h"

extern "C" {

/* Reads entry `index` of table file `file`: its position (x, y) and size (width, height). */
void asdTMTexTableGetEntryPlacement(u32 file, s32 index, int *x, int *y, int *width, int *height);

} /* extern "C" */

#endif
