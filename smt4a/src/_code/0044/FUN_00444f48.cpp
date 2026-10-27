#include "common.h"

extern "C" {

void FUN_00444f4c(void);

/* Runs FUN_00444f4c (placed right after, so the call is a linker NOP). */
void FUN_00444f48(void)
{
    FUN_00444f4c();
}

} /* extern "C" */
