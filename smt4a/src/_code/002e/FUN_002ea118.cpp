#include "common.h"

extern "C" {

void FUN_002ea11c(void);

/* Runs FUN_002ea11c (placed right after, so the call is a linker NOP). */
void FUN_002ea118(void)
{
    FUN_002ea11c();
}

} /* extern "C" */
