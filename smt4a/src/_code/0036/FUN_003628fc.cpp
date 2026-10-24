#include "common.h"

extern "C" {

__declspec(noreturn) __weak void FUN_003628fc_hook(void);

/* Calls the engine's (removed) noreturn hook; armlink turned the tail branch into a nop. */
void FUN_003628fc(void)
{
    FUN_003628fc_hook();
}

} /* extern "C" */
