/* NON_MATCHING: readable u64 copy; retail passes (dest, src) to a following copy routine via a removed tail branch (pop {r4, lr}; nop). */
#include "common.h"

extern "C" {
const u64 *FUN_001afa44(void);

void FUN_001afc10(u64 *output)
{
    *output = *FUN_001afa44();
}
}
