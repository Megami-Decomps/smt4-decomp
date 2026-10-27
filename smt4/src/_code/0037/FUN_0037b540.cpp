#include "common.h"

extern "C" {

void FUN_0037b544(void);

/* Runs FUN_0037b544 (placed right after, so the call is a linker NOP). */
void FUN_0037b540(void)
{
    FUN_0037b544();
}

} /* extern "C" */
