#include "common.h"

extern "C" {

void onlineCallContextWait(void);

/* Forwards to onlineCallContextWait. */
void FUN_001035a8(void)
{
    onlineCallContextWait();
}

} /* extern "C" */
