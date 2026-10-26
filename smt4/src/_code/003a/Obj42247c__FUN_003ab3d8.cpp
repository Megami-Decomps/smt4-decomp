#include "common.h"
#include "classes/Obj42247c.h"

extern "C" {

__declspec(noreturn) __weak void FUN_003ab3d8_hook(void);

/* Calls the engine's (removed) noreturn hook; armlink turned the tail branch into a nop. */
}

void Obj42247c::FUN_003ab3d8()
{
    FUN_003ab3d8_hook();
}
