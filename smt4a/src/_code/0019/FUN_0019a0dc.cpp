#include "common.h"

extern "C" {

/* A debug hook armlink removed (the jump to it became a nop). */
__declspec(noreturn) __weak void FUN_0019a0dc_hook(void *a, u8 *b);

void FUN_0019a0dc(void *a, u8 *b)
{
    FUN_0019a0dc_hook(a, b + 0x534);
}

} /* extern "C" */
