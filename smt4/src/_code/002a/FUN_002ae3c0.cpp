#include "common.h"

extern "C" {

/* A debug hook armlink removed (the jump to it became a nop). */
__declspec(noreturn) __weak void FUN_002ae3c0_hook(void);

void FUN_002ae3c0(void)
{
    FUN_002ae3c0_hook();
}

} /* extern "C" */
