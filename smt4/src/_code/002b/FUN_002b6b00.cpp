#include "common.h"

extern "C" {

/* A debug hook armlink removed (the jump to it became a nop). */
__declspec(noreturn) __weak void FUN_002b6b00_hook(void);

void FUN_002b6b00(void)
{
    FUN_002b6b00_hook();
}

} /* extern "C" */
