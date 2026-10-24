#include "common.h"

extern "C" {

s32 playerAlignmentExtreme(s32 kind);
void scrSetResult(s32 result);

/* Script command: reports whether the player alignment is the extreme given by kind 5. */
u32 FUN_003487fc(void)
{
    scrSetResult(playerAlignmentExtreme(5));
    return 1;
}

} /* extern "C" */
