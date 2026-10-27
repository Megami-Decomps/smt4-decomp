#include "common.h"

extern "C" {

void FUN_005144a4(void);

/* Runs FUN_005144a4 (placed right after, so the call is a linker NOP). */
void FUN_005144a0(void)
{
    FUN_005144a4();
}

} /* extern "C" */
