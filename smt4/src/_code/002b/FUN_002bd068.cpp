#include "common.h"

extern "C" {

/* A debug hook armlink removed (the jump to it became a nop). */
__declspec(noreturn) __weak void FUN_002bd068_hook(void);

void FUN_002bd068(void)
{
    FUN_002bd068_hook();
}

} /* extern "C" */
