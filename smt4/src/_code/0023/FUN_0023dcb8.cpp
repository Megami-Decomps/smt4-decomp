#include "common.h"
#include "code/Code0023.h"

extern "C" {

__declspec(noreturn) __weak void FUN_0023dcb8_hook(void);

/* Calls the engine's (removed) noreturn hook; armlink turned the tail branch into a nop. */
void FUN_0023dcb8(void)
{
    FUN_0023dcb8_hook();
}

} /* extern "C" */
