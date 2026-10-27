#include "common.h"

extern "C" {

void FUN_00363880(void);

/* Runs FUN_00363880 (placed right after, so the call is a linker NOP). */
void FUN_0036387c(void)
{
    FUN_00363880();
}

} /* extern "C" */
