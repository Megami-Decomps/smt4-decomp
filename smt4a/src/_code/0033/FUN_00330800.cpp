#include "common.h"

extern "C" {

void FUN_0021c414(u32 fadeFrames);

/* Script command: stops the BGM without a fade. */
u32 FUN_00330800(void)
{
    FUN_0021c414(0);
    return 1;
}

} /* extern "C" */
