#include "common.h"

extern "C" {

__declspec(noreturn) __weak void FUN_002c3940_hook(void);

/* Calls the engine's (removed) noreturn hook; armlink turned the tail branch into a nop. */
void FUN_002c3940(void)
{
    FUN_002c3940_hook();
}

} /* extern "C" */
