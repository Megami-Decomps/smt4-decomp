#include "common.h"

extern "C" {

__weak int FUN_0030cbb0_hook(int x);

/* Passes `x` through the engine's (removed) release hook. */
int FUN_0030cbb0(int x)
{
    return FUN_0030cbb0_hook(x);
}

} /* extern "C" */
