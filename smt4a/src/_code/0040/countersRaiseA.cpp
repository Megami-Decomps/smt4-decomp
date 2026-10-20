#include "shard/Shard0040.h"

extern "C" {

extern Counters *gameGetCounters(void);

/* Raises counter `index` to at least `value`. */
void countersRaiseA(s32 index, u32 value)
{
    u32 *slot = &gameGetCounters()->a[index];

    if (*slot > value) {
        value = *slot;
    }
    *slot = value;
}

} /* extern "C" */
