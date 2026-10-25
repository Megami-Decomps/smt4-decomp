#include "common.h"
#include "shard/W5_W5Match7_FlagBanks.h"

extern "C" {

/* A debug hook armlink removed (the jump to it became a nop). */
__declspec(noreturn) __weak void FUN_001654f0_hook(void *a, void *b, int c);

void FUN_001654f0(void *a, void *b)
{
    FUN_001654f0_hook(a, b, 0);
}

} /* extern "C" */
