#include "common.h"

extern "C" {

/* A debug hook armlink removed (the jump to it became a nop). */
__declspec(noreturn) __weak void FUN_00192718_hook(void);

void FUN_00192718(void)
{
    FUN_00192718_hook();
}

} /* extern "C" */
