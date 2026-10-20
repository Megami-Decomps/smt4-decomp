#include "common.h"

extern "C" {

__declspec(noreturn) __weak void FUN_001bd53c_hook(void);

/* Calls the engine's (removed) noreturn hook; armlink turned the tail branch into a nop. */
void FUN_001bd53c(void)
{
    FUN_001bd53c_hook();
}

} /* extern "C" */
