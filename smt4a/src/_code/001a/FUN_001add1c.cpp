#include "common.h"

extern "C" {

/* A debug hook armlink removed (the jump to it became a nop). */
__declspec(noreturn) __weak void FUN_001add1c_hook(int code);

void FUN_001add1c(void)
{
    FUN_001add1c_hook(39);
}

} /* extern "C" */
