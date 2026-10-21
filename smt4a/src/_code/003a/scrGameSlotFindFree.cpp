#include "shard/Shard003A.h"

extern "C" {

extern s32 gameSlotTableFindFree(void);
extern void scrSetResult(s32 value);

/* Script command: result is gameSlotTableFindFree(). */
u32 scrGameSlotFindFree(void)
{
    scrSetResult(gameSlotTableFindFree());
    return 1;
}

} /* extern "C" */
