#include "common.h"
#include "event/2dEvent/Npc2d.h"

extern "C" {


u32 gameCountersGetWord(int index)
{
    u32 *table = reinterpret_cast<u32 *>(gameGetCounters());

    return table[index];
}

} /* extern "C" */
