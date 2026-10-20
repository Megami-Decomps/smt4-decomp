#include "common.h"

extern "C" {

__declspec(noreturn) __weak void FUN_00281784_hook(void);

/* Calls the engine's (removed) noreturn hook; armlink turned the tail branch into a nop. */
void FUN_00281784(void)
{
    FUN_00281784_hook();
}

} /* extern "C" */
