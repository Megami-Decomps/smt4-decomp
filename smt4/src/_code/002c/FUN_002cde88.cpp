/* NON_MATCHING: retail evaluates `id & 0xFF` twice (once before each gameGetCounters call, in r6 and r5); built computes it once, after the first call. */
#include "common.h"

extern "C" {

u32 *gameGetCounters(void);
u32 scrGetArg(u32 index);

/* Script command: raises counter (argument 0 & 0xFF) to argument 1 if it is lower. */
u32 FUN_002cde88(void)
{
    u32 id = scrGetArg(0);
    u32 value = scrGetArg(1);

    if (gameGetCounters()[id & 0xFF] < value) {
        gameGetCounters()[id & 0xFF] = value;
    }
    return 1;
}

} /* extern "C" */
