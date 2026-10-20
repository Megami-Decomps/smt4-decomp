#include "shard/Shard0036.h"

extern "C" {

extern s32 gameSlotTableFindFree(void);
extern void scrSetResult(s32 value);

/* Script command: result is gameSlotTableFindFree(). */
u32 FUN_0036f800(void)
{
    scrSetResult(gameSlotTableFindFree());
    return 1;
}

} /* extern "C" */
