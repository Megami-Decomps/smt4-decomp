#include "common.h"

extern "C" void asdGxCommandListFinishCurrent(void);

/* Callback forwarding to the command-list completion handler. */
extern "C" void FUN_00161c5c(void)
{
    asdGxCommandListFinishCurrent();
}
