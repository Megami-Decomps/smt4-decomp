#include "common.h"

extern "C" {
u32 FUN_001ba3d4(u32);
void flagValueSub(u32, u32);

// Clear the flag counters in the two designated ID ranges.
u32 FUN_0035b0dc(void)
{
    for (u32 id = 0; id < 0x7df; ++id) {
        if (id - 1 <= 0x3b || id - 0x79f <= 0x3f)
            flagValueSub(id, FUN_001ba3d4(id));
    }
    return 1;
}
}
