#include "common.h"

extern "C" {

extern u32 *gameGetCounters(void);

u32 gameCountersGetWord(int index)
{
    u32 *table = gameGetCounters();

    return table[index];
}

} /* extern "C" */
