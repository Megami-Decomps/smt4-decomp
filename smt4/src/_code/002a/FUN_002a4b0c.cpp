#include "common.h"

extern "C" {

/* A debug hook armlink removed (the jump to it became a nop). */
__declspec(noreturn) __weak void FUN_002a4b0c_hook(void);

void FUN_002a4b0c(void)
{
    FUN_002a4b0c_hook();
}

} /* extern "C" */
