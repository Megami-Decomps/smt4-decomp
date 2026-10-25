#include "common.h"
#include "util/CalleeContracts.h"

extern "C" {

__declspec(noreturn) __weak void FUN_001ba3d0_hook(void);

/* Calls the engine's (removed) noreturn hook; armlink turned the tail branch into a nop. */
void FUN_001ba3d0(void)
{
    FUN_001ba3d0_hook();
}

} /* extern "C" */
