/* NON_MATCHING: readable u64 copy; retail passes (dest, src) to a following copy routine via a removed tail branch (pop {r4, lr}; nop). */
#include "common.h"

extern "C" {
const u64 *FUN_002ad3a4(void);

void FUN_0014fbc4(u64 *output)
{
    *output = *FUN_002ad3a4();
}
}
