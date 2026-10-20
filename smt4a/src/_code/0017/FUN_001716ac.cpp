#include "common.h"

extern "C" {

void FUN_0018c014(void);

/* A debug hook armlink removed (the jump to it became a nop). */
__declspec(noreturn) __weak void FUN_001716ac_hook(void);

void FUN_001716ac(int enabled)
{
    if (enabled) {
        FUN_0018c014();
    } else {
        FUN_001716ac_hook();
    }
}

} /* extern "C" */
