#include "common.h"

extern "C" {

__declspec(noreturn) __weak void FUN_00186f54_hook(void);

/* Calls the engine's (removed) noreturn hook; armlink turned the tail branch into a nop. */
void FUN_00186f54(void)
{
    FUN_00186f54_hook();
}

} /* extern "C" */
