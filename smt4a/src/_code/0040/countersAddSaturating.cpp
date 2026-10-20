#include "shard/Shard0040.h"

extern "C" {

extern Counters *FUN_001bcea0(void);

/* Adds `value` to counter `index`, saturating at 0xFFFFFFFF. */
void countersAddSaturating(s32 index, u32 value)
{
    u32 *slot = &FUN_001bcea0()->a[index];
    u32 current = *slot;

    if (~current > value) {
        current = current + value;
    } else {
        current = 0xFFFFFFFF;
    }
    *slot = current;
}

} /* extern "C" */
