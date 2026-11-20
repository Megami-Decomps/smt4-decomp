#include "common.h"

extern "C" {

void sharedRefRelease(void);
void watcherGetActiveContext(void);

/* Runs watcherGetActiveContext, then sharedRefRelease. */
void FUN_002f4364(void)
{
    watcherGetActiveContext();
    sharedRefRelease();
}

} /* extern "C" */
