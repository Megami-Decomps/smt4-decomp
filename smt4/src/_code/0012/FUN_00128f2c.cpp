#include "common.h"

extern "C" {

extern void FUN_002b5954(void);
extern u32 FUN_00128f3c(void);

/* Runs FUN_002b5954, then registers the callbacks (FUN_00128f3c). */
u32 FUN_00128f2c(void)
{
    FUN_002b5954();
    return FUN_00128f3c();
}

} /* extern "C" */
