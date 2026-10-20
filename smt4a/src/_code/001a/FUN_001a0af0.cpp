#include "common.h"

extern "C" {

/* A debug hook armlink removed (the jump to it became a nop). */
__declspec(noreturn) __weak void FUN_001a0af0_hook(void);

void FUN_001a0af0(void)
{
    FUN_001a0af0_hook();
}

} /* extern "C" */
