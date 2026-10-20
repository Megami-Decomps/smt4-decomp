#include "common.h"

extern "C" {

/* A debug hook armlink removed (the jump to it became a nop). */
__declspec(noreturn) __weak void FUN_00184c4c_hook(void);

void FUN_00184c4c(void)
{
    FUN_00184c4c_hook();
}

} /* extern "C" */
