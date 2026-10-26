#include "common.h"
#include "code/Code003d.h"

extern "C" {

/* A debug hook armlink removed (the jump to it became a nop). */
__declspec(noreturn) __weak void FUN_003da998_hook(void);

void FUN_003da998(void)
{
    FUN_003da998_hook();
}

} /* extern "C" */
