#include "common.h"

extern "C" {

__declspec(noreturn) __weak void FUN_001623d0_hook(void);

/* Calls the engine's (removed) noreturn hook; armlink turned the tail branch into a nop. */
void FUN_001623d0(void)
{
    FUN_001623d0_hook();
}

} /* extern "C" */
