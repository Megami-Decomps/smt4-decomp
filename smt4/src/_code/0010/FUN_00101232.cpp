#include "common.h"

extern "C" void FUN_00101080(s32 mode);

/* Reset the common subsystem to mode zero. */
extern "C" void FUN_00101232(void *)
{
    FUN_00101080(0);
}
