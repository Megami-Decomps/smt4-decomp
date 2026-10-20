#include "common.h"

extern "C" {

/* A debug hook armlink removed (the jump to it became a nop). */
__declspec(noreturn) __weak void FUN_002bdb44_hook(void);

void FUN_002bdb44(void)
{
    FUN_002bdb44_hook();
}

} /* extern "C" */
