#include "common.h"

extern "C" {

s32 FUN_002f6758(void);
void FUN_001240d2(void);

/* Calls FUN_001240d2 when FUN_002f6758 returns nonzero. */
void FUN_00117568(void)
{
    if (FUN_002f6758() != 0) {
        FUN_001240d2();
    }
}

} /* extern "C" */
