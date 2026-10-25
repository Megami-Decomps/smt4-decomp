#include "common.h"
#include "shard/FUN_002bd068.h"

extern "C" {

/* A debug hook armlink removed (the jump to it became a nop). */
__declspec(noreturn) __weak void FUN_002bd068_hook(void);

unsigned int FUN_002bd068(short arg0)
{
    FUN_002bd068_hook();
}

} /* extern "C" */
