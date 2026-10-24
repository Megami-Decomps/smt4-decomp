#include "common.h"

extern "C" {

__declspec(noreturn) __weak void FUN_0037c888_hook(void);

/* Calls the engine's (removed) noreturn hook; armlink turned the tail branch into a nop. */
void FUN_0037c888(void)
{
    FUN_0037c888_hook();
}

} /* extern "C" */
