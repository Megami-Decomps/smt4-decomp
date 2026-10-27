#include "common.h"

extern "C" {

void FUN_0016f160(void);

/* Runs FUN_0016f160 (placed right after, so the call is a linker NOP). */
void FUN_0016f15c(void)
{
    FUN_0016f160();
}

} /* extern "C" */
