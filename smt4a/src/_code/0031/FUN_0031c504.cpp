#include "common.h"

extern "C" {

u32 playerAlignmentExtreme(s32 id);
s32 scrSetResult(s32 value);

/* Script command: returns whether the player's alignment is extreme for kind four. */
s32 FUN_0031c504(void)
{
    scrSetResult(playerAlignmentExtreme(4));
    return 1;
}

} /* extern "C" */
