#include "common.h"

extern "C" {

void FUN_00460068(void);

/* Runs FUN_00460068 (placed right after, so the call is a linker NOP). */
void FUN_00460064(void)
{
    FUN_00460068();
}

} /* extern "C" */
