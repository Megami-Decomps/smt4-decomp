#include "common.h"

extern "C" {

extern void FUN_00115c74(void);

/* Runs the callback action and reports success. */
s32 FUN_0010af48(void)
{
    FUN_00115c74();
    return 0;
}

} /* extern "C" */
