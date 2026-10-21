#include "common.h"
extern "C" {
void *eventCommandGetPendingCleanup(void);
void FUN_00227228(void *cleanup);
/* Dispatch the pending cleanup to the following helper. */
void FUN_00227218(void) { FUN_00227228(eventCommandGetPendingCleanup()); }
}
