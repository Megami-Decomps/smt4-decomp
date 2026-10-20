#include "common.h"

extern "C" {

/* A debug hook armlink removed (the jump to it became a nop). */
__declspec(noreturn) __weak void FUN_002b47ec_hook(int code);

void FUN_002b47ec(void)
{
    FUN_002b47ec_hook(18);
}

} /* extern "C" */
