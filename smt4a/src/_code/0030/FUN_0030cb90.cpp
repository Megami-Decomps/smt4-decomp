#include "common.h"

extern "C" {

__weak int FUN_0030cb90_hook(int x);

/* Passes `x` through the engine's (removed) release hook. */
int FUN_0030cb90(int x)
{
    return FUN_0030cb90_hook(x);
}

} /* extern "C" */
