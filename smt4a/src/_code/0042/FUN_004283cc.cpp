#include "classes/WindowStatus.h"
#include "nn/Result.h"
extern "C" {
/* Returns only negative failure results. */
nn::Result FUN_004283cc(void *owner) { s32 result=queryResultFailureOnly(static_cast<const u32 *>(owner)); return nnResultIsFailure(result) ? result : 0; }
}
