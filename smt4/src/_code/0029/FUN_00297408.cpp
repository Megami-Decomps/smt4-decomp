#include "common.h"

extern "C" {

/* A debug hook armlink removed (the jump to it became a nop). */
__declspec(noreturn) __weak void FUN_00297408_hook(int code);

void FUN_00297408(void)
{
    FUN_00297408_hook(21);
}

} /* extern "C" */
