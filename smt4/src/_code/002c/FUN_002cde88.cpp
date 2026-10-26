/* NON_MATCHING: the double `id & 0xFF` evaluation now matches row for row; retail keeps the id in r5 and the value in r4, ours the opposite. */
#include "common.h"
#include "event/2dEvent/Npc2d.h"
#include "script/ScriptArgs.h"

extern "C" {


/* The counter at `slot`. */
static __inline u32 *counterSlot(u32 slot)
{
    return reinterpret_cast<u32 *>(gameGetCounters()) + slot;
}

/* Script command: raises counter (argument 0 & 0xFF) to argument 1 if it is lower. */
u32 FUN_002cde88(void)
{
    u32 id = scrGetArg(0);
    u32 value = scrGetArg(1);

    if (*counterSlot(id & 0xFF) < value) {
        *counterSlot(id & 0xFF) = value;
    }
    return 1;
}

} /* extern "C" */
