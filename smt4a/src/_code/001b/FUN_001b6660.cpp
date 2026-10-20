#include "common.h"

extern "C" {

/* A debug hook armlink removed (the jump to it became a nop). */
__declspec(noreturn) __weak void FUN_001b6660_hook(void *a, u8 *b);

void FUN_001b6660(void *a, u8 *b)
{
    FUN_001b6660_hook(a, b + 4);
}

} /* extern "C" */
