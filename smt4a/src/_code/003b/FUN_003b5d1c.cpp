#include "common.h"

extern "C" {

/* A debug hook armlink removed (the jump to it became a nop). */
__declspec(noreturn) __weak void FUN_003b5d1c_hook(void);

void FUN_003b5d1c(void)
{
    FUN_003b5d1c_hook();
}

} /* extern "C" */
