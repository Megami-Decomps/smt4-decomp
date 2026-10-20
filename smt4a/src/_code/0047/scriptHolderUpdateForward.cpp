#include "common.h"

extern "C" {

extern void scriptHolderUpdate(void);

/* Forwards to the function that follows it in the binary. */
void scriptHolderUpdateForward(void)
{
    scriptHolderUpdate();
}

} /* extern "C" */
