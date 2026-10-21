#include "common.h"
extern "C" {
void *eventCommandGetPendingCleanup(void);
void objClearFields(void *cleanup);
/* Dispatch the pending cleanup to the following helper. */
void eventCommandDispatchPendingCleanup(void) { objClearFields(eventCommandGetPendingCleanup()); }
}
