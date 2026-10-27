#include "common.h"

extern "C" {

void FUN_0037dfe4(void);

/* Runs FUN_0037dfe4 (placed right after, so the call is a linker NOP). */
void FUN_0037dfe0(void)
{
    FUN_0037dfe4();
}

} /* extern "C" */
