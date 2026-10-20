#include "common.h"

extern "C" {

/* A debug hook armlink removed (the jump to it became a nop). */
__declspec(noreturn) __weak void FUN_002bf18c_hook(int a, int x, int y);

void FUN_002bf18c(int unused, int a, f32 x, f32 y)
{
    FUN_002bf18c_hook(a, (int)x, (int)y);
}

} /* extern "C" */
