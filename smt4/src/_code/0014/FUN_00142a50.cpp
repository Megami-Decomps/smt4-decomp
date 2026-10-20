#include "common.h"

extern "C" {

/* A debug hook armlink removed (the jump to it became a nop). */
__declspec(noreturn) __weak void FUN_00142a50_hook(u32 *slot, int value);

void FUN_00142a50(u32 *slot)
{
    *slot = 66;
    FUN_00142a50_hook(slot, 66);
}

} /* extern "C" */
