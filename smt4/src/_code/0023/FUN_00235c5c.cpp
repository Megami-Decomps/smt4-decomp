#include "common.h"

extern "C" {

void FUN_00235c60(void);

/* Runs FUN_00235c60 (placed right after, so the call is a linker NOP). */
void FUN_00235c5c(void)
{
    FUN_00235c60();
}

} /* extern "C" */
