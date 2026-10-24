#include "common.h"

extern "C" {

__declspec(noreturn) __weak void FUN_0037a078_hook(void);

/* Calls the engine's (removed) noreturn hook; armlink turned the tail branch into a nop. */
void FUN_0037a078(void)
{
    FUN_0037a078_hook();
}

} /* extern "C" */
