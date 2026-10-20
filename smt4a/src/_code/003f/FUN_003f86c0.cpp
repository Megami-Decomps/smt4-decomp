#include "common.h"

extern "C" {

/* A debug hook armlink removed (the jump to it became a nop). */
__declspec(noreturn) __weak void FUN_003f86c0_hook(int code);

void FUN_003f86c0(void)
{
    FUN_003f86c0_hook(39);
}

} /* extern "C" */
