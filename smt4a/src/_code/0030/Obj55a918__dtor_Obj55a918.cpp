#include "common.h"

extern "C" {

__weak int FUN_0030cbb0_hook(int x);

/* Passes `x` through the engine's (removed) release hook. */
int _ZN9Obj55a918D1Ev(int x)
{
    return FUN_0030cbb0_hook(x);
}

} /* extern "C" */
