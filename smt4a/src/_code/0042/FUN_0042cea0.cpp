#include "common.h"

extern "C" {

void FUN_0042cea4(void);

/* Runs FUN_0042cea4 (placed right after, so the call is a linker NOP). */
void FUN_0042cea0(void)
{
    FUN_0042cea4();
}

} /* extern "C" */
