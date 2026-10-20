#include "common.h"

extern "C" {

__declspec(noreturn) __weak void FUN_002c52f4_hook(void);

/* Calls the engine's (removed) noreturn hook; armlink turned the tail branch into a nop. */
void FUN_002c52f4(void)
{
    FUN_002c52f4_hook();
}

} /* extern "C" */
