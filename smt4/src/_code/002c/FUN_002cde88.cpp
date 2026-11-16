#include "common.h"
#include "event/2dEvent/Npc2d.h"
#include "script/ScriptArgs.h"

extern "C" {


/* The counter at `index`. */
static __inline u32 counterGet(s32 index)
{
    u32 *table = reinterpret_cast<u32 *>(gameGetCounters());

    return table[index];
}

/* Sets the counter at `index`. */
static __inline void counterSet(s32 index, u32 value)
{
    u32 *table = reinterpret_cast<u32 *>(gameGetCounters());

    table[index] = value;
}

/* Script command: raises counter (argument 0 & 0xFF) to argument 1 if it is lower. */
u32 FUN_002cde88(void)
{
    u32 id = scrGetArg(0);
    u32 value = scrGetArg(1);

    if (counterGet(id & 0xFF) < value) {
        counterSet(id & 0xFF, value);
    }
    return 1;
}

} /* extern "C" */
