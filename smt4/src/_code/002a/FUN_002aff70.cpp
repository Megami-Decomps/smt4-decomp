#include "common.h"

extern "C" {

/* A debug hook armlink removed (the jump to it became a nop). */
__declspec(noreturn) __weak void FUN_002aff70_hook(void);

void FUN_002aff70(void)
{
    FUN_002aff70_hook();
}

} /* extern "C" */
