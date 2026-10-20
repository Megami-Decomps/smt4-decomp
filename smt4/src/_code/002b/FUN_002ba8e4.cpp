#include "common.h"

extern "C" {

/* A debug hook armlink removed (the jump to it became a nop). */
__declspec(noreturn) __weak void FUN_002ba8e4_hook(void);

void FUN_002ba8e4(void)
{
    FUN_002ba8e4_hook();
}

} /* extern "C" */
