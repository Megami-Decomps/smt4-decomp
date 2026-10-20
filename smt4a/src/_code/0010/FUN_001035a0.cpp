#include "common.h"

extern "C" {

void onlineJobWaitComplete(void);

/* Forwards to onlineJobWaitComplete. */
void FUN_001035a0(void)
{
    onlineJobWaitComplete();
}

} /* extern "C" */
