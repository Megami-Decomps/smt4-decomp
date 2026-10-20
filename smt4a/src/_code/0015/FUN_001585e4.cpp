#include "common.h"

extern "C" {

/* A debug hook armlink removed (the jump to it became a nop). */
__declspec(noreturn) __weak void FUN_001585e4_hook(void *a, int b);

void FUN_001585e4(void *a)
{
    FUN_001585e4_hook(a, 0);
}

} /* extern "C" */
