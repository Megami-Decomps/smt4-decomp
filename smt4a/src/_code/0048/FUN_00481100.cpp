#include "common.h"

extern "C" {

__declspec(noreturn) __weak void FUN_00481100_hook(void);

/* Calls the engine's (removed) noreturn hook; armlink turned the tail branch into a nop. */
void FUN_00481100(void)
{
    FUN_00481100_hook();
}

} /* extern "C" */
