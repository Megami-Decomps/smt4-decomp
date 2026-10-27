#include "common.h"

extern "C" {

void FUN_00128d24(void);

/* Runs FUN_00128d24 (placed right after, so the call is a linker NOP). */
void FUN_00128d20(void)
{
    FUN_00128d24();
}

} /* extern "C" */
