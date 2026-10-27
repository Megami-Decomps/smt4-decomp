#include "common.h"

extern "C" {

void FUN_00460f30(void);

/* Runs FUN_00460f30 (placed right after, so the call is a linker NOP). */
void FUN_00460f2c(void)
{
    FUN_00460f30();
}

} /* extern "C" */
