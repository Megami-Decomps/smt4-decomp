#include "common.h"
#include "shard/FUN_003da998.h"

extern "C" {

/* A debug hook armlink removed (the jump to it became a nop). */
__declspec(noreturn) __weak void FUN_003da998_hook(void);

void FUN_003da998(void)
{
    FUN_003da998_hook();
}

} /* extern "C" */
