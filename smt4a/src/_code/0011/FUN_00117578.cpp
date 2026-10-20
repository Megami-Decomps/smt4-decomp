#include "common.h"

extern "C" {

s32 FUN_002f6758(void);
void FUN_001240f6(void);

/* Calls FUN_001240f6 when FUN_002f6758 returns nonzero. */
void FUN_00117578(void)
{
    if (FUN_002f6758() != 0) {
        FUN_001240f6();
    }
}

} /* extern "C" */
