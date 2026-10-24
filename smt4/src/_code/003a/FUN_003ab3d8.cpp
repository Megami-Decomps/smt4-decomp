#include "common.h"

extern "C" {

__declspec(noreturn) __weak void FUN_003ab3d8_hook(void);

/* Calls the engine's (removed) noreturn hook; armlink turned the tail branch into a nop. */
void FUN_003ab3d8(void)
{
    FUN_003ab3d8_hook();
}

} /* extern "C" */
