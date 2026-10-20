#include "common.h"

extern "C" {

void FUN_0036b6d8(s32 mode, u32 id);

/* Open the Arousal Skill scene with no mode selected. */
void FUN_0036b6cc(u32 id)
{
    FUN_0036b6d8(-1, id);
}

} /* extern "C" */
