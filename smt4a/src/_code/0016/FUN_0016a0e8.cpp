#include "common.h"

extern "C" {

/* A debug hook armlink removed (the jump to it became a nop). */
__declspec(noreturn) __weak void FUN_0016a0e8_hook(int code);

void FUN_0016a0e8(void)
{
    FUN_0016a0e8_hook(18);
}

} /* extern "C" */
