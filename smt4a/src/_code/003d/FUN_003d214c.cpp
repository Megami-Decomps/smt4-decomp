#include "common.h"

extern "C" {

__declspec(noreturn) __weak void FUN_003d214c_hook(void);

/* Calls the engine's (removed) noreturn hook; armlink turned the tail branch into a nop. */
void FUN_003d214c(void)
{
    FUN_003d214c_hook();
}

} /* extern "C" */
