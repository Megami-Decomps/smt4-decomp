#include "common.h"

extern "C" {

__declspec(noreturn) __weak void FUN_0042c5cc_hook(void);

/* Calls the engine's (removed) noreturn hook; armlink turned the tail branch into a nop. */
void FUN_0042c5cc(void)
{
    FUN_0042c5cc_hook();
}

} /* extern "C" */
