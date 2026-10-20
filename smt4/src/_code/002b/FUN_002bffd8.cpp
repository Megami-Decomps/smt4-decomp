#include "common.h"

extern "C" {

/* A debug hook armlink removed (the jump to it became a nop). */
__declspec(noreturn) __weak void FUN_002bffd8_hook(void *a, void *b, int c);

void FUN_002bffd8(void *a, void *b)
{
    FUN_002bffd8_hook(a, b, 0);
}

} /* extern "C" */
