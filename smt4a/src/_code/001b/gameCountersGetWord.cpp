#include "common.h"

extern "C" {

u32 *gameGetCounters(void);

/* Returns entry `index` of the table gameGetCounters returns. */
u32 gameCountersGetWord(s32 index)
{
    u32 *table = gameGetCounters();
    return table[index];
}

} /* extern "C" */
