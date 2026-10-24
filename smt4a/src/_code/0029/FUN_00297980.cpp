#include "common.h"

extern "C" {

__declspec(noreturn) __weak void FUN_00297980_hook(s32 value, s32 mode);

/* Calls the engine's (removed) noreturn hook with the value and mode one; armlink turned the tail branch into a nop. */
void FUN_00297980(s32 value)
{
    FUN_00297980_hook(value, 1);
}

} /* extern "C" */
