#include "common.h"

extern "C" {

__declspec(noreturn) __weak void FUN_0048e408_hook(void);

/* Calls the engine's (removed) noreturn hook; armlink turned the tail branch into a nop. */
void _ZN9Obj53230012FUN_0048e408Ev(void)
{
    FUN_0048e408_hook();
}

} /* extern "C" */
