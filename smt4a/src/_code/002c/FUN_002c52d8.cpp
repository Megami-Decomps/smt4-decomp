#include "common.h"

extern "C" {

/* A debug hook armlink removed (the jump to it became a nop). */
__declspec(noreturn) __weak void FUN_002c52d8_hook(int a);

void FUN_002c52d8(void)
{
    FUN_002c52d8_hook(0);
}

} /* extern "C" */
