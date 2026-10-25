/* Deferred destruction of model manager objects (smt4). */
#ifndef SMT4_ASDSDK_MDLMANAGERDESTROY_H
#define SMT4_ASDSDK_MDLMANAGERDESTROY_H

#include "common.h"

extern "C" {

/* Marks the model object `handle` for destruction. */
void asdMdlManagerMarkDestroy(u32 handle);

} /* extern "C" */

#endif
