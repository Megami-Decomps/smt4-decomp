#include "common.h"

extern "C" {

/* A debug hook armlink removed (the jump to it became a nop). */
__declspec(noreturn) __weak void FUN_002e59f8_hook(void *a, void *b, void *c);

void FUN_002e59f8(void *a, void *b, void *c)
{
    FUN_002e59f8_hook(b, a, c);
}

} /* extern "C" */
